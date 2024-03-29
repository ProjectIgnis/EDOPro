#ifndef UTILS_GUI_H
#define UTILS_GUI_H

#include "text_types.h"

namespace irr {
class IrrlichtDevice;
namespace video {
class IVideoDriver;
}
}

namespace ygo {

struct GameConfig;

namespace GUIUtils {

irr::IrrlichtDevice* CreateDevice(GameConfig* configs);
void ChangeCursor(irr::IrrlichtDevice* device, /*irr::gui::ECURSOR_ICON*/ int icon);
bool TakeScreenshot(irr::IrrlichtDevice* device);
void ToggleFullscreen(irr::IrrlichtDevice* device, bool& fullscreen);
void ShowErrorWindow(epro::stringview context, epro::stringview message);
void ToggleSwapInterval(irr::video::IVideoDriver* driver, int interval);
std::string SerializeWindowPosition(irr::IrrlichtDevice* device);

}

}

#endif
