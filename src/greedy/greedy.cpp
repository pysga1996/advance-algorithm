#include <iostream>
#include <functional>
#include <greedy.h>
#include <util.h>
#include <common_util.h>

int command;

using ExDemoFuncPtr = cpp_commons::file_util::ExDemoFuncPtr;

ExDemoFuncPtr greedyModuleMapper(int selection);

namespace greedy_algorithm {

    void greedyModule() {
        using namespace cpp_commons::file_util;
        processMenu(constants::GREEDY_MENU_PATH, greedyModuleMapper);
    }

}

ExDemoFuncPtr greedyModuleMapper(const int selection) {
    switch (selection) {
        case 1:
            return greedy_algorithm::numberOfToysDemo;;
        case 2:
            return greedy_algorithm::meetingRoomDemo;
        default:
            return nullptr;
    }
}


