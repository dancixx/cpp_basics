#include <iostream>
#include <cmath>
#include <string>

/**
 * @brief
 * int array[10] -> Junk data, cant use
 *
 */

void arrays()
{
    int scores[10];

    std::cout << scores[0] << std::endl;
    std::cout << scores[1] << std::endl;

    // read array data
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "scores: " << scores[i] << std::endl;
    }

    // write array data
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    // read array data
    for (size_t i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            scores[i] = 100;
        }
        else
        {
            scores[i] = pow(i, 2);
        }
    }

    // read array data
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "scores: " << scores[i] << std::endl;
    }

    int families[5]{12, 7, 5};

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "families: " << families[i] << std::endl;
    }

    int class_sizes[]{12, 7, 5};

    // nice -> range base for loop
    for (int value : class_sizes)
    {
        std::cout << "class_size: " << value << std::endl;
    }

    // cant modify
    const int birds[]{1, 2, 3, 5, 6, 7};
    int array_size{std::size(birds)}; // C++17+
    // birds[1] = 10; compiler error
    int sum = 0;

    for (int value : birds)
    {
        sum += value;
    }
    std::cout << "sum: " << sum << std::endl;
    std::cout << "array size: " << array_size << std::endl;

    // array of characters
    char messages[6]{'H', 'e', 'l', 'l', 'o', '\0'};
    // char single qoutes !!! ''
    // '\0' (null character) closing tag for char arrays

    std::cout << "messages: ";
    for (auto &&i : messages)
    {
        std::cout << i;
    }
    std::cout << std::endl;

    messages[1] = 'a';
    std::cout << "messages: ";
    for (auto &&i : messages)
    {
        std::cout << i;
    }
    std::cout << std::endl;

    // print
    std::cout << "message: " << messages << std::endl;

    // C-string, null ('\0') termintated messages
    char messages1[]{'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message: " << messages1 << std::endl;

    char messages2[6]{'H', 'e', 'l', 'l', 'o'};
    std::cout << "message: " << messages2 << std::endl;

    char messages3[]{'H', 'e', 'l', 'l', 'o'}; // not a valid C-String, not null character
    std::cout << "message: " << messages3 << std::endl;

    char messages4[]{"Hello"};
    std::cout << "message: " << messages4 << std::endl;

    // array bounds cant put into a not existing place
    int numbers[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    numbers[10000000] = 10;
    std::cout << "11th number: " << numbers[10000000] << std::endl;
}