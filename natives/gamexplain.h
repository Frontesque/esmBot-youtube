#pragma once

#include "common.h"

using std::string;

ArgumentMap Gamexplain(string type, string* outType, char* BufferData, size_t BufferLength,
                 ArgumentMap Arguments, size_t* DataSize);