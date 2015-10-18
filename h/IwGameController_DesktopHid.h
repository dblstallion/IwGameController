/*
 * (C) 2015 Nick Smith
 *
 * DesktopHid Implementation of IwGameController
 */
 
#ifndef IW_GAMECONTROLLER_DESKTOP_HID_H
#define IW_GAMECONTROLLER_DESKTOP_HID_H

#include "s3e.h"
#include "s3eHidController.h"
#include "IwGameController.h"

namespace IwGameController {
    
class CIwGameControllerDesktopHid : public CIwGameController
{
public:
    CIwGameControllerDesktopHid();
    virtual ~CIwGameControllerDesktopHid();

    void                StartFrame();
    bool                SelectControllerByPlayer(int player);
    int                 GetControllerCount();
    int                 GetMaxControllers();
    bool                GetButtonState(Button::eButton button);
    float               GetAxisValue(Axis::eAxis axis);
    void                SetPropagateButtonsToKeyboard(bool propagate);
};

#define IW_GAMECONTROLLER_DESKTOP_HID (CIwGameControllerDesktopHid::getInstance())

}   // namespace IwGameController

#endif
