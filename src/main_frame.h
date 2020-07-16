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
    // Bind events
    Bind(wxEVT_MENU, &MainFrame::OnClose, this, wxID_EXIT);
}

#endif // _WXWIDGETS_TEST_SRC_MAIN_FRAME_H_