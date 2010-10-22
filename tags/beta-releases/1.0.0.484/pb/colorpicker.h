/*
	Copyright (C) 2004-2005 Cory Nelson

	This software is provided 'as-is', without any express or implied
	warranty.  In no event will the authors be held liable for any damages
	arising from the use of this software.

	Permission is granted to anyone to use this software for any purpose,
	including commercial applications, and to alter it and redistribute it
	freely, subject to the following restrictions:

	1. The origin of this software must not be misrepresented; you must not
		claim that you wrote the original software. If you use this software
		in a product, an acknowledgment in the product documentation would be
		appreciated but is not required.
	2. Altered source versions must be plainly marked as such, and must not be
		misrepresented as being the original software.
	3. This notice may not be removed or altered from any source distribution.

*/

#pragma once

#include <tchar.h>
#include <windows.h>

#define PB_COLORPICKER_CLASS _T("PB_ColorPicker")

#define CPM_GETCOLOR (WM_USER+1)
#define CPM_SETCOLOR (WM_USER+2)

#define ColorPicker_GetColor(hwnd) SendMessage(hwnd, CPM_GETCOLOR, 0, 0)
#define ColorPicker_SetColor(hwnd, color) SendMessage(hwnd, CPM_SETCOLOR, (WPARAM)(COLORREF)(color), 0)

#define CPN_SETCOLOR 1

struct CPNM_SETCOLOR {
	NMHDR nmh;
	COLORREF color;
};

bool RegisterColorPicker(HINSTANCE hInstance);
