#pragma once

#include "libs/types.h"

struct MouseInfo;

struct PickerInfo
{
    bool Open;
    Color CurrentColor, NewColor;
    Color* BoundColor; // This color is changed along with CurrentColor. Zero if no color is bound.
    Vec2 CursorSV;
    float CursorH;

    Vec2 Pos, Size, HueStripPos, HueStripSize, SVBoxPos, SVBoxSize;
    bool DraggingHue, DraggingSV;
};

namespace Picker
{
    void Init(PickerInfo* Picker);
    void SetColor(Color Col, PickerInfo* Picker, bool SetNewColorOnly = false);
    void UpdateAndRender(PickerInfo* Picker, Color* Colors, MouseInfo& Mouse, uint32 BlankTexture);
}

