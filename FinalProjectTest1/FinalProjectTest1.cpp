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


	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 4, 2, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Enter a movie name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	m_staticText1->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer1->Add( m_staticText1, 0, wxALL, 5 );

	_textCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(500,-1), 0);
	_textCtrl->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer1->Add( _textCtrl, 0, wxALL, 5 );

	_search_button = new wxButton( this, wxID_ANY, wxT("Search"), wxDefaultPosition, wxSize( 200,30 ), 0 );
    _search_button->Bind(wxEVT_BUTTON, &AppFrame::OnButtonClick, this);
	fgSizer1->Add( _search_button, 0, wxALL, 5 );


	bSizer1->Add( fgSizer1, 1, wxTOP, 5 );

    //wxGridBagSizer
    wxGridBagSizer* gbSizer1;
	gbSizer1 = new wxGridBagSizer( 10, 5 );
	gbSizer1->SetFlexibleDirection( wxBOTH );
	gbSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    gbSizer1->SetMinSize( wxSize( 600,450 ) );
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Metascore:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	gbSizer1->Add( m_staticText2, wxGBPosition( 5, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	title_label = new wxStaticText( this, wxID_ANY, wxT("title_label1"), wxDefaultPosition, wxSize( 400,-1 ), 0 );
	title_label->Wrap( -1 );
	title_label->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	gbSizer1->Add( title_label, wxGBPosition( 0, 2 ), wxGBSpan( 1, 3 ), wxALL, 5 );

	year_label = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	year_label->Wrap( -1 );
	year_label->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	gbSizer1->Add( year_label, wxGBPosition( 0, 5 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	rated_label = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	rated_label->Wrap( -1 );
	rated_label->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	gbSizer1->Add( rated_label, wxGBPosition( 1, 4 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	runtime_label = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	runtime_label->Wrap( -1 );
	runtime_label->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	gbSizer1->Add( runtime_label, wxGBPosition( 1, 5 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	genre_label = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 270,-1 ), 0 );
	genre_label->Wrap( -1 );
	genre_label->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	gbSizer1->Add( genre_label, wxGBPosition( 1, 2 ), wxGBSpan( 1, 2 ), wxALL, 5 );

	directors_label = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 400,-1 ), 0 );
	directors_label->Wrap( -1 );
	directors_label->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	gbSizer1->Add( directors_label, wxGBPosition( 2, 3 ), wxGBSpan( 1, 3 ), wxALL, 5 );

	m_staticText81 = new wxStaticText( this, wxID_ANY, wxT("Directors:"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText81->Wrap( -1 );
	m_staticText81->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	gbSizer1->Add( m_staticText81, wxGBPosition( 2, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Actors:"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	gbSizer1->Add( m_staticText9, wxGBPosition( 3, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	actors_label = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 400,-1 ), 0 );
	actors_label->Wrap( -1 );
	actors_label->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	gbSizer1->Add( actors_label, wxGBPosition( 3, 3 ), wxGBSpan( 1, 3 ), wxALL, 5 );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Awards:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	m_staticText10->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	gbSizer1->Add( m_staticText10, wxGBPosition( 4, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	awards_label = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	awards_label->Wrap( -1 );
	awards_label->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	gbSizer1->Add( awards_label, wxGBPosition( 4, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );



	metascore_label = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	metascore_label->Wrap( -1 );
	metascore_label->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	gbSizer1->Add( metascore_label, wxGBPosition( 5, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("IMDBRating:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	m_staticText22->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	gbSizer1->Add( m_staticText22, wxGBPosition( 6, 2 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	imdb_label = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	imdb_label->Wrap( -1 );
	imdb_label->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	gbSizer1->Add( imdb_label, wxGBPosition( 6, 3 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	plot_label = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 500,100 ), 0 );
	plot_label->Wrap( 1 );
	plot_label->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	gbSizer1->Add( plot_label, wxGBPosition( 7, 2 ), wxGBSpan( 2, 4 ), wxALL, 5 );

    //IMAGE LOGIC

    image_panel = new ImagePanel(this, wxT("../img/test1.png"), wxBITMAP_TYPE_PNG);

    image_panel->SetMinSize(wxSize(200,300));
    image_panel->SetMaxSize(wxSize(200,300));

    gbSizer1->Add( image_panel, wxGBPosition( 0, 0 ), wxGBSpan( 8, 2 ), wxALL, 5 );

    //
	bSizer1->Add( gbSizer1, 1, wxEXPAND, 5 );

	this->SetSizer( bSizer1 );
	this->Layout();

    this->Centre(wxBOTH);
}

AppFrame::~AppFrame()
{
}



BEGIN_EVENT_TABLE(ImagePanel, wxPanel)
EVT_PAINT(ImagePanel::PaintEvent) // catch paint events
END_EVENT_TABLE()

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

void AppFrame::OnButtonClick(wxCommandEvent& evt) {
    //Implement movie search
    //std::thread t1 = std::thread(Timer(), this);
    try
    {   
        std::string url = std::string(AppFrame::GetSearchBox().mb_str());
        std::replace(url.begin(), url.end(), ' ', '+');
        std::cout << url << std::endl;
        http::Request request{ DATA_REQUEST_URL_START + "t=" + url };

        const auto response = request.send("GET");

        std::string JSON_string = std::string{ response.body.begin(), response.body.end()};

        json object = json::parse(JSON_string);

        if (!object.contains("Title")) {
            AppFrame::SetTitle(wxString("No such movie"));
            return;
        }

        auto json_title = object["Title"].get<std::string>();
        auto json_year = object["Year"].get<std::string>();
        auto json_rated = object["Rated"].get<std::string>();
        auto json_runtime = object["Runtime"].get<std::string>();
        auto json_genre = object["Genre"].get<std::string>();
        auto json_director = object["Director"].get<std::string>();
        auto json_actors = object["Actors"].get<std::string>();
        auto json_plot = object["Plot"].get<std::string>();
        auto json_awards = object["Awards"].get<std::string>();
        auto json_metascore = object["Metascore"].get<std::string>();
        auto json_imdb = object["imdbRating"].get<std::string>();
        auto json_image_url = object["Poster"].get<std::string>();

        //Image handler
        std::string image_path = ImageManager::DownloadImageToTMP(json_title, json_image_url);
        AppFrame::GetImagePanel()->_image.LoadFile(image_path, wxBITMAP_TYPE_JPEG);


        Refresh();

        AppFrame::title_label->SetLabelText(wxString(json_title));
        AppFrame::year_label->SetLabelText(wxString(json_year));
        AppFrame::rated_label->SetLabelText(wxString(json_rated));
        AppFrame::runtime_label->SetLabelText(wxString(json_runtime));
        AppFrame::genre_label->SetLabelText(wxString(json_genre));
        AppFrame::directors_label->SetLabelText(wxString(json_director));
        AppFrame::actors_label->SetLabelText(wxString(json_actors));
        AppFrame::plot_label->SetLabelText(wxString(json_plot));
        AppFrame::awards_label->SetLabelText(wxString(json_awards));
        AppFrame::metascore_label->SetLabelText(wxString(json_metascore));
        AppFrame::imdb_label->SetLabelText(wxString(json_imdb));

        //For the plot text to work correctly
        AppFrame::Wrap(450);




        //obj::Movie m{
        //    temp["Title"].get<std::string>(),
        //    temp["Year"].get<std::string>()
        //};

        //std::cout << m.title << '\n';


    } catch (const std::exception& e)
    {
        std::cerr << "Request failed, error: " << e.what() << '\n';
    }
}


/*
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
