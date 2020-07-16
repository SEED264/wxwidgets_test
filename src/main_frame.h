#ifndef _WXWIDGETS_TEST_SRC_MAIN_FRAME_H_
#define _WXWIDGETS_TEST_SRC_MAIN_FRAME_H_

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif // WX_PRECOMP

class MainFrame : public wxFrame {
public:
    MainFrame();
    void OnClose(wxCommandEvent& event) {
        Close(true);
    }
};


inline MainFrame::MainFrame() :
    wxFrame(nullptr, wxID_ANY, "MainFrame", wxDefaultPosition, wxDefaultSize) {
    // Set menu bar
    wxMenu *menu_file = new wxMenu;
    menu_file->Append(wxID_EXIT, "&Quit", "Quit application");

    wxMenuBar *menu_bar = new wxMenuBar;
    menu_bar->Append(menu_file, "&File");

    SetMenuBar(menu_bar);

    // Set status bar
    CreateStatusBar();
    SetStatusText("MainFrame");

    // Bind events
    Bind(wxEVT_MENU, &MainFrame::OnClose, this, wxID_EXIT);
}

#endif // _WXWIDGETS_TEST_SRC_MAIN_FRAME_H_