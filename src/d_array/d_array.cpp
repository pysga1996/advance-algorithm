#include <util.h>
#include <common_util.h>
#include <d_array.h>

using ExDemoFuncPtr = cpp_commons::file_util::ExDemoFuncPtr;

namespace d_array {

    void arrayModule() {
        using namespace cpp_commons::file_util;
        ExDemoFuncMapper funcMapper = [](const int selection) -> ExDemoFuncPtr {
            switch (selection) {
                case 1:
                    return d_array::sumArrayDemo;
                case 2:
                    return d_array::squareArrayDemo;
                default:
                    return nullptr;
            }
        };
        cin.sync();
        processMenu(constants::GREEDY_MENU_PATH, funcMapper);
    }

}