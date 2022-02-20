#include <iostream>
#include <iomanip>

/**
 * @brief variables
 * int (real number)
 * double, float (fractional number, 7.5)
 * char (characters)
 * bool (false, true)
 * void (typeless, no returns)
 * auto
 *
 *
 * 0,1 are bits, 8 of them is the byte
 * binary, octo, hexadecimal transformation for numbers
 */

/**
 * @brief initialization
 * typename variable_name inittype
 * int num(2) functional
 * int num {2} braced
 * int num = 3 assignment
 *
 * sizeof(num) -> how much memory used for store the variable in bytes
 *
 * modifiers
 * signed, unsigned (store negative) -> cant use with double, float
 * short, long only for int (except long double)
 *
 *
 * fractional numbers
 * float, double (default), long double (floating points number)
 * suffixes: f: floating, L: long double, u: unsigned, ll: long long, ul: unsigned long ...
 *
 * boolean: 1 -> true, 0 -> false (1 byte in memory)
 */

void variables()
{
    float num{232324.3f};
    double number1{2.5};
    long double number3{2.6L};

    // set decimals in terminal
    std::cout << std::setprecision(20);
    std::cout << num << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(long double) << std::endl;

    unsigned int num1 = {2};
    unsigned int num2 = (2);
    unsigned int num3(2);

    std::cout << num1 / num << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;

    bool red_light{true}; // = bool red_light{1};
    bool green_ligth{1};  // = bool red_light{0};

    if (red_light)
    {
        std::cout << "Stop" << std::endl;
    }

    if (green_ligth)
    {
        std::cout << "Go" << std::endl;
    }

    char character{'a'};
    std::cout << character << std::endl;

    char value = 65;
    std::cout << "value: " << value << std::endl;
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;

    auto number10{123ul};
    std::cout << number10 << std::endl;
}