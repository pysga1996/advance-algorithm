#include <common_util.h>
#include <util.h>
#include <main.h>

using ExDemoFuncPtr = cpp_commons::file_util::ExDemoFuncPtr;

ExDemoFuncPtr advancedAlgorithmsMapper(int selection);

int main() {
    using namespace std;
    using namespace cpp_commons::file_util;
    processMenu(constants::ADVANCED_ALGORITHMS_MENU_PATH, advancedAlgorithmsMapper);
    return 0;
}

ExDemoFuncPtr advancedAlgorithmsMapper(const int selection) {
    switch (selection) {
        case 1:
            return greedy_algorithm::greedyModule;
        default:
            return nullptr;
    }
}

