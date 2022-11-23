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

///////////////////////////////////////////////////////////////////////////

const std::string PRIVATE_KEY = "9165ddc0";
const std::string DATA_REQUEST_URL_START = "http://www.omdbapi.com/?apikey=" + PRIVATE_KEY + "&";
const std::string POSTER_REQUEST_URL_START = "http://img.omdbapi.com/?apikey=" + PRIVATE_KEY + "&";

///////////////////////////////////////////////////////////////////////////////
/// Libcurl image download and memory
///////////////////////////////////////////////////////////////////////////////

class ImageManager
{

public:
  wxImage GetImageInputStream(const wxString &url)
  {
    // wxImage image;
    // wxURL url("https://m.media-amazon.com/images/M/MV5BMjUyNTA3MTAyM15BMl5BanBnXkFtZTgwOTEyMTkyMjE@._V1_SX300.jpg");
    // if (url.GetError() == wxURL_NOERR)
    // {
    //   wxInputStream *in_stream;

    //   in_stream = url.GetInputStream();

    //   image = new wxImage(202, 300, in_stream, true);
    // }

    return NULL;
  }
};

class ImagePanel : public wxPanel
{
  wxBitmap _image;

  public:

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
  wxStaticText *m_staticText2;
  wxTextCtrl *m_textCtrl1;
  wxButton *m_button2;
  wxStaticText *title_label1;
  wxStaticText *year_label1;
  wxStaticText *genre_label1;
  wxStaticText *rated_label1;
  wxStaticText *runtime_label1;
  wxStaticText *m_plot_label1;

  ImagePanel *image_panel;

protected:
public:
  AppFrame(const wxString &title);
  AppFrame(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = wxEmptyString, const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize(800, 600), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

  ~AppFrame();

  void OnButtonClick(wxCommandEvent &event);

  // GET FOR MOVIE SEARCH

  virtual wxString GetSearchBox()
  {
    return m_textCtrl1->GetLineText(0);
  }

  wxButton* GetButton() {
    return m_button2;
  }

  // SET AND GET FOR TITLE
  void SetTitle(const wxString &title)
  {
    title_label1->SetLabelText(title);
  }

  wxString GetTitle()
  {
    return title_label1->GetLabel();
  }

  // SET AND GET FOR YEAR
  void SetYear(const wxString &year)
  {
    year_label1->SetLabelText(year);
  }

  wxString GetYear()
  {
    return year_label1->GetLabel();
  }
  // SET AND GET FOR GENRE
  void SetGenre(const wxString &genre)
  {
    genre_label1->SetLabelText(genre);
  }

  wxString GetGenre()
  {
    return genre_label1->GetLabel();
  }
  // SET AND GET FOR RATED
  void SetRated(const wxString &rated)
  {
    rated_label1->SetLabelText(rated);
  }

  wxString GetRated()
  {
    return rated_label1->GetLabel();
  }
  // SET AND GET FOR RUNTIME
  void SetRuntime(const wxString &runtime)
  {
    runtime_label1->SetLabelText(runtime);
  }

  wxString GetRuntime()
  {
    return rated_label1->GetLabel();
  }
  // SET AND GET FOR PLOT
  void SetPlot(const wxString& plot) {
    m_plot_label1->SetLabelText(plot);
  }

  wxString GetPlot() {
    return m_plot_label1->GetLabel();
  }

  void Wrap(int width) {
    m_plot_label1->Wrap(width);
  }
  

  // SET AND GET FOR IMAGE
};

///////////////////////////////////////////////////////////////////////////////
/// Class Timer
///////////////////////////////////////////////////////////////////////////////

class Timer {
    private:
      int timer;
  public:
    Timer() {
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