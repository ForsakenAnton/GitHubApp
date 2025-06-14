#include <iostream>
#include "MathOperations.h"
#include "StringExtension.h"

int main()
{
    std::cout << "Hello World!\n";

    MathOperations math;
    math.plus(3, 4);
    math.minus(3, 4);
    math.multiply(3, 4);
    math.divide(3, 4);

    StringExtension se;
    std::cout << se.minus("Qwerty", "Qwer") << "\n\n";

    std::cout << "Some Changes here by main user into master branch\n\n";

    std::cout << "Right code...\n\n";

    std::cout << "Add some code...\n\n";
    std::cout << "Add some code 2...\n\n";
}

