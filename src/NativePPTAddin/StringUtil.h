#pragma once

#include "pch.h"

struct StringUtil
{
    static std::string wstring2string(const std::wstring &ws);
    static std::wstring string2wstring(const std::string &s);
};

