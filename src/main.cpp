#include "main.h"

ExDemoFuncPtr basicAlgorithmsMapper(int selection);

int main() {
    processMenu(ARITHMETIC_MENU_PATH, basicAlgorithmsMapper);
    return 0;
}

ExDemoFuncPtr basicAlgorithmsMapper(const int selection) {
    switch (selection) {
        case 1:
            return arithmeticModule;
        default:
            return NULL;
    }
}

