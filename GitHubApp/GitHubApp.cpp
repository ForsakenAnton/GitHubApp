#include <iostream>
#include "MathOperations.h"

int main()
{
    std::cout << "Hello World!\n";

    MathOperations math;
    math.plus(3, 4);
    math.minus(3, 4);
    math.multiply(3, 4);

    math.divide(5, 6);
}

