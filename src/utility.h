/*
Mod Organizer API hooking

Copyright (C) 2012 Sebastian Herbord. All rights reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 3 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <string>

bool StartsWith(LPCSTR string, LPCSTR subString);
bool StartsWith(LPCWSTR string, LPCWSTR subString);

// pathstartswith is like startswith but also ensures that string (a path) has a path separator after the substring (or it ends there)

bool PathStartsWith(LPCSTR string, LPCSTR subString);
bool PathStartsWith(LPCWSTR string, LPCWSTR subString);

bool EndsWith(LPCSTR string, LPCSTR subString);
bool EndsWith(LPCWSTR string, LPCWSTR subString);

bool Contains(LPCWSTR string, LPCWSTR subString);

LPCSTR GetBaseName(LPCSTR string);
LPCWSTR GetBaseName(LPCWSTR string);
LPWSTR GetBaseName(LPWSTR string);

void Canonicalize(LPWSTR destination, LPCWSTR source, size_t bufferSize = MAX_PATH);

const wchar_t *wcsrpbrk(const wchar_t *string, const wchar_t *control);
