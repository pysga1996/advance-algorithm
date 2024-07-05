#include <common_util.h>
#include <util.h>
#include <main.h>

using ExDemoFuncPtr = cpp_commons::file_util::ExDemoFuncPtr;

using ExDemoFuncMapper = cpp_commons::file_util::ExDemoFuncMapper;

int main() {
    using namespace std;
    using namespace cpp_commons::file_util;
    ExDemoFuncMapper funcMapper = [](const int selection) -> ExDemoFuncPtr {
        switch (selection) {
            case 1:
                return d_array::sumArrayDemo;
            case 2:
                return greedy_algorithm::greedyModule;
            default:
                return nullptr;
        }
    };
    processMenu(constants::ADVANCED_ALGORITHMS_MENU_PATH, funcMapper);
    return 0;
}

