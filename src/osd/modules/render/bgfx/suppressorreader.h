// license:BSD-3-Clause
// copyright-holders:Ryan Holtz
//============================================================
//
//  suppressorreader.h - Reads pass-skipping conditions
//
//============================================================

#pragma once

#ifndef __DRAWBGFX_SUPPRESSOR_READER__
#define __DRAWBGFX_SUPPRESSOR_READER__

#include "statereader.h"

#include <string>
#include <map>

class bgfx_suppressor;
class bgfx_slider;

class suppressor_reader : public state_reader
{
public:
	static bgfx_suppressor* read_from_value(const Value& value, std::map<std::string, bgfx_slider*>& sliders);

private:
    static void get_values(const Value& value, std::string name, int* values, const int count);

	static void validate_parameters(const Value& value);

    static const int CONDITION_COUNT = 2;
    static const string_to_enum CONDITION_NAMES[CONDITION_COUNT];
};

#endif // __DRAWBGFX_SUPPRESSOR_READER__
