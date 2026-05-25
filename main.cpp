#include <iostream>

void showMenu() {
    std::cout << "--- MENU ---" << std::endl;
    std::cout << "1. Start Program" << std::endl;
    std::cout << "2. Exit" << std::endl;
}

int main() {
    showMenu(); // Вызов функции меню
    return 0;
}