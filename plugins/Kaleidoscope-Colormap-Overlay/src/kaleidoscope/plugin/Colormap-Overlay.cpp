/* Kaleidoscope-Colormap-Overlay - A LED plugin for Kaleidoscope.
 * Copyright (C) 2017-2018  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "kaleidoscope/plugin/Colormap-Overlay.h"

#include <stdint.h>  // for uint8_t

#include "kaleidoscope/KeyAddr.h"               // for KeyAddr, MatrixAddr, MatrixAddr<>::...
#include "kaleidoscope/device/device.h"         // for cRGB, CRGB
#include "kaleidoscope/event_handler_result.h"  // for EventHandlerResult, EventHandlerRes...
#include "kaleidoscope/key_defs.h"              // for Key, KEY_FLAGS, Key_NoKey, LockLayer
#include "kaleidoscope/layers.h"                // for Layer, Layer_
#include "kaleidoscope/plugin/LEDControl.h"     // for LEDControl

namespace kaleidoscope {
namespace plugin {

bool ColormapOverlay::hasOverlay(KeyAddr k) {
  uint8_t layer_index = Layer.lookupActiveLayer(k);
  for (uint8_t i{0}; i < overlay_count_; ++i) {
    Overlay overlay = overlays_[i];
    if (overlay.addr == k) {
      if ((overlay.layer == layer_index) ||
          (overlay.layer == layer_wildcard)) {
        selectedColor = &overlay.color;
        return true;
      }
    }
  }

  return false;
}

EventHandlerResult ColormapOverlay::onSetup() {
  return EventHandlerResult::OK;
}

void ColormapOverlay::setKeyboardLEDColors() {
  for (auto key_addr : KeyAddr::all()) {
    if (ColormapOverlay::hasOverlay(key_addr)) {
      ::LEDControl.setCrgbAt(KeyAddr(key_addr), *selectedColor);
    } else {
      ::LEDControl.refreshAt(KeyAddr(key_addr));
    }
  }
}

EventHandlerResult ColormapOverlay::afterEachCycle() {
  setKeyboardLEDColors();

  return EventHandlerResult::OK;
}

}  // namespace plugin
}  // namespace kaleidoscope

kaleidoscope::plugin::ColormapOverlay ColormapOverlay;
