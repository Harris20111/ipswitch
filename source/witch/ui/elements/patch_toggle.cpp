#include "patch_toggle.hpp"

namespace witch {
namespace ui {
namespace elements {

PatchToggle::PatchToggle(pchtxt::Patch& patch)
    : Aether::ListOption(patch.name, getToggleStr(patch.enabled), getToggleCb()), m_patch(patch) {
    updateColor();
    // TODO: display author
}

PatchToggle::~PatchToggle() {}

}  // namespace elements
}  // namespace ui
}  // namespace witch