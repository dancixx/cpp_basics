#include <iostream>

int addNumbers(int first, int second)
{
    int sum = first + second;
    return sum;
}

double addNumbersFromTerminal()
{
    double first{5};
    double second{10};

    std::cout << "add first: ";
    std::cin >> first;
    std::cout << "add second: ";
    std::cin >> second;

    double sum = first + second;
    return sum;
}