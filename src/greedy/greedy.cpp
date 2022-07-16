#include <iostream>
#include <greedy.h>
#include <util.h>
#include <common_util.h>

using ExDemoFuncPtr = cpp_commons::file_util::ExDemoFuncPtr;

namespace greedy_algorithm {

    void greedyModule() {
        using namespace cpp_commons::file_util;
        ExDemoFuncMapper funcMapper = [](const int selection) -> ExDemoFuncPtr {
            switch (selection) {
                case 1:
                    return greedy_algorithm::numberOfToysDemo;;
                case 2:
                    return greedy_algorithm::meetingRoomDemo;
                default:
                    return nullptr;
            }
        };
        processMenu(constants::GREEDY_MENU_PATH, funcMapper);
    }

}



