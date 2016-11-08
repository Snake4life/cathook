/*
 * drawing.cpp
 *
 *  Created on: Oct 5, 2016
 *      Author: nullifiedcat
 */

#include "drawing.h"
#include "interfaces.h"

#include "fixsdk.h"
#include <vgui/ISurface.h>
#include <Color.h>
#include <cdll_int.h>
#include <mathlib/vmatrix.h>
#include <cassert>
#include <icliententity.h>

// TODO globals
unsigned long draw::font_handle = 0;
unsigned long draw::panel_top = 0;
unsigned long draw::font_handle_large = 0;
int draw::width = 0;
int draw::height = 0;
Color draw::white(255, 255, 255, 255);
Color draw::red(184, 56, 59, 255);
Color draw::blue(88, 133, 162, 255);
Color draw::yellow(255, 255, 0, 255);

ESPStringCompound::ESPStringCompound() {
	m_Color = nullptr;
	m_String = nullptr;
}

void draw::Initialize() {
	draw::font_handle = interfaces::surface->CreateFont();
	draw::font_handle_large = interfaces::surface->CreateFont();
	interfaces::surface->SetFontGlyphSet(draw::font_handle, "Tahoma", 15, 500, 0, 0, 0x010 | 0x200);
	interfaces::surface->SetFontGlyphSet(draw::font_handle_large, "Tahoma", 32, 500, 0, 0, 0x200);
}

void draw::DrawString(unsigned long font, int x, int y, Color color, const wchar_t* text) {
	interfaces::surface->DrawSetTextPos(x, y);
	interfaces::surface->DrawSetTextColor(color);
	interfaces::surface->DrawSetTextFont(draw::font_handle);
	interfaces::surface->DrawPrintText(text, wcslen(text));
}

void draw::DrawString(int x, int y, Color color, bool center, const char* text, ...) {
	va_list list;
	char buffer[1024] = { '\0' };
	wchar_t string[1024] = { '\0' };
	va_start(list, text);
	vsprintf(buffer, text, list);
	va_end(list);
	swprintf(string, 1024, L"%s", buffer);
	if (center) {
		int l, h;
		draw::GetStringLength(string, l, h);
		x -= (l / 2);
	}
	draw::DrawString(draw::font_handle, x, y, color, string);
}

bool draw::EntityCenterToScreen(IClientEntity* entity, Vector& out) {
	if (!entity) return false;
	Vector world;
	Vector min, max;
	entity->GetRenderBounds(min, max);
	world = entity->GetAbsOrigin();
	world.z += (min.z + max.z) / 2;
	Vector scr;
	return draw::WorldToScreen(world, scr);
}

bool draw::WorldToScreen(Vector& origin, Vector& screen) {
	VMatrix wts = interfaces::engineClient->WorldToScreenMatrix();
	screen.z = 0;
	float w = wts[3][0] * origin[0] + wts[3][1] * origin[1] + wts[3][2] * origin[2] + wts[3][3];
	if (w > 0.001) {
		float odw = 1.0f / w;
		screen.x = (draw::width / 2) + (0.5 * ((wts[0][0] * origin[0] + wts[0][1] * origin[1] + wts[0][2] * origin[2] + wts[0][3]) * odw) * draw::width + 0.5);
		screen.y = (draw::height / 2) - (0.5 * ((wts[1][0] * origin[0] + wts[1][1] * origin[1] + wts[1][2] * origin[2] + wts[1][3]) * odw) * draw::height + 0.5);
		return true;
	}
	return false;
}

void draw::OutlineRect(int x, int y, int w, int h, Color color) {
	interfaces::surface->DrawSetColor(color);
	interfaces::surface->DrawOutlinedRect(x, y, x + w, y + h);
}

void draw::GetStringLength(wchar_t* string, int& length, int& height) {
	//wchar_t buf[1024] = {'\0'};
	//mbstowcs(buf, string, strlen(string));
	interfaces::surface->GetTextSize(draw::font_handle, string, length, height);
}
