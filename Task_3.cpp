#include <iostream>

#include "characters.h"
int main()
{
    char symbol;
    std::cout << "Please enter a character in UPPER CASE A-H: ";
    std::cin >> symbol;
    evaluateChar(symbol);
    return 0;
}
