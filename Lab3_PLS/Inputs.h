#pragma once
#include "Dictionary_manager.h"

#include <iostream>

int InputInt(std::string message, int min, int max);


std::string InputString(std::string message);

void set_user_input_dictionary(Dictionary_manager& dictionary);