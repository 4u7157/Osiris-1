#pragma once
#include <string>

#include "SDK/BaseEntity.h"
#include "SDK/ClientMode.h"
#include "SDK/GlobalVars.h"
#include "SDK/Input.h"

class Memory final {
public:
    Memory();
    std::uintptr_t findPattern(std::string, std::string);

    std::uintptr_t present;
    std::uintptr_t reset;

    GlobalVars* globalVars;
    BaseEntity** localPlayer;
    ClientMode* clientMode;
    Input* input;
};

extern Memory memory;
