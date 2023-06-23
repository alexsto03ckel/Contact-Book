#include "App.h"
#include "MainFrame.h"

wxIMPLEMENT_APP(ContactBookApp);

bool ContactBookApp::OnInit()
{
    ContactBookFrame* frame = new ContactBookFrame("Contact Book");
    frame->SetClientSize(900, 600);
    frame->Center();
    frame->Show();

    return true;
}

