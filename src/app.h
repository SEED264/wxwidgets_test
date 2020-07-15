#ifndef _WXWIDGETS_TEST_SRC_APP_H_
#define _WXWIDGETS_TEST_SRC_APP_H_

#define NOMINMAX 1

#include <windows.h>
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif // WX_PRECOMP
#include "main_frame.h"

class MainApp : public wxApp {
public:
    bool OnInit();
};

bool MainApp::OnInit() {
    MainFrame *frame = new MainFrame();
    frame->Show(true);
    HWND handle = frame->GetHandle();
    return true;
}


#endif // _WXWIDGETS_TEST_SRC_APP_H_