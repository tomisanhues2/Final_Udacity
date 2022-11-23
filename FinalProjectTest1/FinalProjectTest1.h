#pragma once

#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/panel.h>
#include <wx/object.h>
#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/icon.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/gbsizer.h>
#include <wx/frame.h>
#include <wx/app.h>
#include <wx/html/htmlwin.h>
#include <wx/html/htmlproc.h>
#include <wx/wxhtml.h>
#include <wx/fs_inet.h>
#include <wx/filedlg.h>
#include <wx/mstream.h>
#include <wx/generic/statbmpg.h>

#include <wx/dcclient.h>

///////////////////////////////////////////////////////////////////////////

#include <nlohmann/json.hpp> //https://json.nlohmann.me/
#include <HTTPRequest.hpp>
#include <curl/curl.h>
#include <string>
#include <thread>
#include <fstream>
#include <stdio.h>
#include <opencv2/opencv.hpp>

///////////////////////////////////////////////////////////////////////////

const std::string PRIVATE_KEY = "9165ddc0";
const std::string DATA_REQUEST_URL_START = "http://www.omdbapi.com/?apikey=" + PRIVATE_KEY + "&";

///////////////////////////////////////////////////////////////////////////////
/// Libcurl image download and memory
///////////////////////////////////////////////////////////////////////////////

class ImageManager
{

public:
  static std::string DownloadImageToTMP(std::string &title, std::string &url)
  {
    std::string tmp_path = std::filesystem::temp_directory_path();
    std::string file_path = title + ".jpg";
    std::replace(file_path.begin(), file_path.end(), ' ', '_');
    std::string outfilename = (tmp_path + "/" + file_path);

    curl_global_init(CURL_GLOBAL_ALL);
    std::ofstream ofs(outfilename.c_str(), std::ostream::binary);

    if (CURLE_OK == download_image(url, ofs))
    {
      std::cout << "File saved!!" << std::endl;
    }

    ofs.close();
    curl_global_cleanup();

    int down_width = 300;
    int down_height = 200;
    cv::Mat resize_down;
    cv::Mat image = cv::imread(outfilename);
    cv::resize(image, resize_down, cv::Size(202, 300), cv::INTER_LINEAR);

    bool is_success = cv::imwrite(outfilename, resize_down);

    if (is_success == false)
    {
      std::cout << "Failed to save the image" << std::endl;
    }
    else
    {
      std::cout << "Saved the image!" << std::endl;
    }

    // wxImage image;
    // wxURL url("https://m.media-amazon.com/images/M/MV5BMjUyNTA3MTAyM15BMl5BanBnXkFtZTgwOTEyMTkyMjE@._V1_SX300.jpg");
    // if (url.GetError() == wxURL_NOERR)
    // {
    //   wxInputStream *in_stream;

    //   in_stream = url.GetInputStream();

    //   image = new wxImage(202, 300, in_stream, true);
    // }

    return outfilename;
  }

private:
  static size_t data_write(void *buf, size_t size, size_t nmemb, void *userp)
  {
    if (userp)
    {
      std::ostream &os = *static_cast<std::ostream *>(userp);
      std::streamsize len = size * nmemb;
      if (os.write(static_cast<char *>(buf), len))
        return len;
    }

    return 0;
  }

  static CURLcode download_image(const std::string &url, std::ostream &os, long timeout = 30)
  {
    CURLcode code(CURLE_FAILED_INIT);
    CURL *curl = curl_easy_init();

    if (curl)
    {
      if (CURLE_OK == (code = curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &data_write)) && CURLE_OK == (code = curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L)) && CURLE_OK == (code = curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L)) && CURLE_OK == (code = curl_easy_setopt(curl, CURLOPT_FILE, &os)) && CURLE_OK == (code = curl_easy_setopt(curl, CURLOPT_TIMEOUT, timeout)) && CURLE_OK == (code = curl_easy_setopt(curl, CURLOPT_URL, url.c_str())))
      {
        code = curl_easy_perform(curl);
      }
      curl_easy_cleanup(curl);
    }
    return code;
  }
  /*CURL *curl;
  FILE *fp;
  CURLcode res;
  std::replace(file_path.begin(), file_path.end(), ' ', '_');
  std::string outfilename = (tmp_path + "/" + file_path);
  curl = curl_easy_init();
  if (curl)
  {
    fp = fopen(outfilename.c_str(), "wb");
    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    fclose(fp);
  }
  std::cout << tmp_path << outfilename << std::endl;
  return NULL;
}*/
};

class ImagePanel : public wxPanel
{
private:
public:
  wxBitmap _image;
  ImagePanel(wxFrame *parent, wxString file, wxBitmapType format);

  void PaintEvent(wxPaintEvent &evt);
  void PaintNow();
  void Render(wxDC &dc);

  DECLARE_EVENT_TABLE()
};

///////////////////////////////////////////////////////////////////////////////
/// Class AppFrame
///////////////////////////////////////////////////////////////////////////////
class AppFrame : public wxFrame
{
private:
  wxStaticText *m_staticText1;
  wxButton *_search_button;
  wxStaticText *m_staticText2;
  wxTextCtrl *_textCtrl;
  wxStaticText *m_staticText81;
  wxStaticText *m_staticText9;
  wxStaticText *m_staticText10;
  wxStaticText *m_staticText22;

  ImagePanel *image_panel;

protected:
public:
  wxStaticText *title_label;
  wxStaticText *year_label;
  wxStaticText *rated_label;
  wxStaticText *runtime_label;
  wxStaticText *genre_label;
  wxStaticText *directors_label;
  wxStaticText *actors_label;
  wxStaticText *awards_label;
  wxStaticText *metascore_label;
  wxStaticText *imdb_label;
  wxStaticText *plot_label;
  AppFrame(const wxString &title);
  AppFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,600 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );

  ~AppFrame();

  void OnButtonClick(wxCommandEvent &event);

  // GET FOR MOVIE SEARCH

  virtual wxString GetSearchBox()
  {
    return _textCtrl->GetLineText(0);
  }

  wxButton *GetButton()
  {
    return _search_button;
  }

  void Wrap(int width)
  {
    plot_label->Wrap(width);
  }

  // GET FOR IMAGEPanel
  ImagePanel *GetImagePanel()
  {
    return image_panel;
  }
};

///////////////////////////////////////////////////////////////////////////////
/// Class Timer
///////////////////////////////////////////////////////////////////////////////

class Timer
{
private:
  int timer;

public:
  Timer()
  {
    timer = 0;
  }
};

///////////////////////////////////////////////////////////////////////////////
/// Class MainApp
///////////////////////////////////////////////////////////////////////////////
class MainApp : public wxApp // MainApp is the class for our application
{
public:
  virtual bool OnInit();
};