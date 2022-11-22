// FinalProjectTest1.cpp : Defines the entry point for the application.
//

#include "FinalProjectTest1.h"

using namespace std;
using json = nlohmann::json;

wxIMPLEMENT_APP(MainApp);


bool MainApp::OnInit()
{
    AppFrame *appFrame = new AppFrame(wxString("Mediabase"));
    appFrame->Show(true);

    return true;
}

AppFrame::AppFrame(const wxString &title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600))
{
    this->SetSizeHints(wxDefaultSize, wxDefaultSize);
    
    wxInitAllImageHandlers();
    wxFileSystem::AddHandler(new wxInternetFSHandler);
    wxBoxSizer *b_sizer;
    b_sizer = new wxBoxSizer(wxVERTICAL);

    wxFlexGridSizer *fg_sizer1;
    fg_sizer1 = new wxFlexGridSizer(4, 2, 0, 0);
    fg_sizer1->SetFlexibleDirection(wxBOTH);
    fg_sizer1->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

    m_staticText2 = new wxStaticText(this, wxID_ANY, wxT("Enter a movie name"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText2->Wrap(-1);
    m_staticText2->SetFont(wxFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    fg_sizer1->Add(m_staticText2, 0, wxALL, 5);

    m_textCtrl1 = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(500, -1), 0);
    m_textCtrl1->SetFont(wxFont(12, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    fg_sizer1->Add(m_textCtrl1, 0, wxALL, 5);

    m_button2 = new wxButton(this, wxID_ANY, wxT("Search"), wxDefaultPosition, wxSize(250, 30), 0);
    m_button2->Bind(wxEVT_BUTTON, &AppFrame::OnButtonClick, this);
    fg_sizer1->Add(m_button2, 0, wxALL, 5);

    b_sizer->Add(fg_sizer1, 1, wxSHAPED, 5);

    wxGridBagSizer *gb_sizer1;
    gb_sizer1 = new wxGridBagSizer(1, 10);
    gb_sizer1->SetFlexibleDirection(wxBOTH);
    gb_sizer1->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    gb_sizer1->SetEmptyCellSize(wxSize(-1, 10));

    gb_sizer1->SetMinSize(wxSize(-1, 450));

    //IMAGE LOGIC

    //m_bitmap = new wxStaticBitmap(this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize(202,300), 0 );
    
    //m_html_win = new wxHtmlWindow( this, wxID_ANY, wxDefaultPosition, wxSize(202,300),  wxHW_NO_SELECTION|wxHW_SCROLLBAR_NEVER );
    //m_html_win = new HtmlWindow(this);
    //m_html_win->LoadPage(wxT("https://m.media-amazon.com/images/M/MV5BMjUyNTA3MTAyM15BMl5BanBnXkFtZTgwOTEyMTkyMjE@._V1_SX300.jpg"));
    image_panel = new ImagePanel(this, wxT("../img/test1.png"), wxBITMAP_TYPE_PNG);
    image_panel->SetMinSize(wxSize( 202,300));
    //image_panel->SetBackgroundColour( wxColour(203, 118, 120));

    gb_sizer1->Add(image_panel, wxGBPosition(0, 0), wxGBSpan(3, 1), wxALL, 5);

    //



    title_label1 = new wxStaticText(this, wxID_ANY, wxT("TITLE"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_SIMPLE);
    title_label1->Wrap(-1);
    title_label1->SetFont(wxFont(22, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    title_label1->SetMinSize(wxSize(200, -1));

    gb_sizer1->Add(title_label1, wxGBPosition(0, 1), wxGBSpan(1, 1), wxALL, 5);

    year_label1 = new wxStaticText(this, wxID_ANY, wxT("YEAR"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_SIMPLE);
    year_label1->Wrap(-1);
    year_label1->SetFont(wxFont(22, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    year_label1->SetMinSize(wxSize(200, -1));

    gb_sizer1->Add(year_label1, wxGBPosition(0, 2), wxGBSpan(1, 1), wxALL, 5);

    gb_sizer1->Add(0, 40, wxGBPosition(1, 1), wxGBSpan(1, 1), wxEXPAND, 5);

    genre_label1 = new wxStaticText(this, wxID_ANY, wxT("GENRE"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_SIMPLE);
    genre_label1->Wrap(-1);
    genre_label1->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    genre_label1->SetMinSize(wxSize(200, -1));

    gb_sizer1->Add(genre_label1, wxGBPosition(2, 1), wxGBSpan(1, 1), wxALL, 5);

    rated_label1 = new wxStaticText(this, wxID_ANY, wxT("RATED"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_SIMPLE);
    rated_label1->Wrap(-1);
    rated_label1->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    rated_label1->SetMinSize(wxSize(200, -1));

    gb_sizer1->Add(rated_label1, wxGBPosition(2, 2), wxGBSpan(1, 1), wxALL, 5);

    runtime_label1 = new wxStaticText(this, wxID_ANY, wxT("RUN"), wxDefaultPosition, wxDefaultSize, 0 | wxBORDER_SIMPLE);
    runtime_label1->Wrap(-1);
    runtime_label1->SetFont(wxFont(18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial")));
    runtime_label1->SetMinSize(wxSize(100, -1));

    gb_sizer1->Add(runtime_label1, wxGBPosition(2, 3), wxGBSpan(1, 1), wxALL, 5);

    b_sizer->Add(gb_sizer1, 1, wxEXPAND, 5);

    this->SetSizer(b_sizer);
    this->Layout();

    this->Centre(wxBOTH);
}

AppFrame::~AppFrame()
{
}

BEGIN_EVENT_TABLE(ImagePanel, wxPanel)
EVT_PAINT(ImagePanel::PaintEvent) // catch paint events
END_EVENT_TABLE()

void AppFrame::OnButtonClick(wxCommandEvent &event)
{
    SetTitle(GetSearchBox());
}

ImagePanel::ImagePanel(wxFrame* parent, wxString file, wxBitmapType format) :
wxPanel(parent)
{
    // load the file... ideally add a check to see if loading was successful
    _image.LoadFile(file, format);
}

void ImagePanel::PaintEvent(wxPaintEvent & evt)
{
    // depending on your system you may need to look at double-buffered dcs
    wxPaintDC dc(this);
    Render(dc);
}

void ImagePanel::PaintNow()
{
    // depending on your system you may need to look at double-buffered dcs
    wxClientDC dc(this);
    Render(dc);
}

/*
 * Here we do the actual rendering. I put it in a separate
 * method so that it can work no matter what type of DC
 * (e.g. wxPaintDC or wxClientDC) is used.
 */
void ImagePanel::Render(wxDC&  dc)
{
    dc.DrawBitmap( _image, 0, 0, false );
}


MainFrame::MainFrame(const wxString &title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(width, height))
{
    wxPanel* panel = new wxPanel(this);
    wxButton* searchButton = new wxButton(panel, wxID_ANY, "Search", wxPoint(150,50), wxSize(100,35));
    searchbutton->Bind(wxEVT_SLIDER, &MainFrame::OnButtonClicked, this);
    wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "Type the name of a movie to find the closest result", wxPoint(120,150));
    wxTextCtrl* textCtrl = new wxTextCtrl(panel, wxID_ANY, "Type here!", wxPoint(500, 145), wxSize(200, -1));

    wxGauge* gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(500,255), wxSize(200,-1));
    gauge->SetValue(50);
    // int idTextXtrl = 1;
    // _userTextCtrl = new wxTextCtrl(ctrlPanel, idTextXtrl, "", wxDefaultPosition, wxSize(width, 50), wxTE_PROCESS_ENTER, wxDefaultValidator, wxTextCtrlNameStr);

}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {
    //Implement movie search
}
// int main()
// {

//     try
//     {
//         http::Request request{ DATA_REQUEST_URL_START + "t=The+imitation+game" };

//         const auto response = request.send("GET");

//         std::string JSON_string = std::string{ response.body.begin(), response.body.end()};

//         json temp = json::parse(JSON_string);

//         std::cout << temp << '\n';

//         obj::Movie m{
//             temp["Title"].get<std::string>(),
//             temp["Year"].get<std::string>()
//         };

//         std::cout << m.title << '\n';


//     } catch (const std::exception& e)
//     {
//         std::cerr << "Request failed, error: " << e.what() << '\n';
//     }


// 	return 0;
// }

*/
