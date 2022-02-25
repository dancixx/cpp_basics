#include <iostream>

void operations()
{
    int number1{2};
    int number2{5};

    int result = number1 + number2;
    std::cout << "result: " << result << std::endl;

    result = number1 - number2;
    std::cout << "result: " << result << std::endl;

    result = number1 * number2;
    std::cout << "result: " << result << std::endl;

    result = number1 / number2;
    std::cout << "result: " << result << std::endl;

    result = number1 % number2;
    std::cout << "result: " << result << std::endl;
}

void precedence()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 12;
    int f = 6;
    int g = 7;

    int result = a + b * c - d / e - f + g;
    std::cout << "result: " << result << std::endl;
}
