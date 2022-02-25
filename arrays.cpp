#include <iostream>
#include <cmath>

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
    // birds[1] = 10; compiler error
    int sum = 0;

    for (int value : birds)
    {
        sum += value;
    }
    std::cout << "sum: " << sum << std::endl;
}