#pragma once

#include "globals.h"
#include "util.h"

void comm_setup();
void comm_first_time_setup();
bool comm_get_setting(int key);
int comm_get_setting_value(int key);
int comm_get_theme();
