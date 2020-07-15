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
private:
    wxDECLARE_EVENT_TABLE();
};

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
EVT_MENU(wxID_EXIT, MainFrame::OnClose)
wxEND_EVENT_TABLE()

inline MainFrame::MainFrame() :
    wxFrame(nullptr, wxID_ANY, "MainFrame", wxPoint(0, 0), wxSize(1280, 720)) {
    Centre();
}

#endif // _WXWIDGETS_TEST_SRC_MAIN_FRAME_H_