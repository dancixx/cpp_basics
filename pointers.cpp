#include <iostream>

// addressing memory
// store memory addresses to other variables
// can only store an address of a variable of type int
// nullptr the pointer not pointing anywhere
// &variable assign the address of variable to a pointer
// cant cross assign betweer pointers of different types

// char pointer point to the first char

void pointers()
{

    // numbers
    int number = 3; // stack memory
    double double_mumber = 3.4;
    int *p_number{&number}; // this will nullptr
    double *p_double_number = &double_mumber;

    std::cout << number << "-" << p_number << std::endl;
    std::cout << double_mumber << "-" << p_double_number << std::endl;

    // dereferencing pointer
    int *p_number2 = nullptr; // int *p_number2 {} is the same
    int int_data = 56;
    p_number2 = &int_data;

    std::cout << *p_number2 << std::endl; // ref to variable through the pointer

    // char pointers
    const char *message = "Hello world!";              // cant be modified
    std::cout << "message: " << *message << std::endl; // ref to variable through the pointer

    // heap and stack memory
    // int *p_number3{nullptr} = new int -> live in heap memory
    // delete p_number3 -> release the memory
    // p_number3 = nullptr

    int number4{22};           // stack memory
    int *p_number4 = &number4; // reference to number4
    std::cout << "number: " << number4 << std::endl;
    std::cout << "p_number: " << p_number4 << std::endl;
    std::cout << "&number: " << &number4 << std::endl;
    std::cout << "*p_number: " << *p_number4 << std::endl;

    int *p_number5;
    int number5{12};
    p_number5 = &number5;
    std::cout << "*p_number5: " << *p_number5 << std::endl;

    // dynamic heap memory
    int *p_number6{};
    p_number6 = new int;
    *p_number6 = 77;
    std::cout << "*p_number6: " << *p_number6 << std::endl;

    delete p_number6;
    p_number6 = nullptr;

    p_number6 = new int(77);
    std::cout << "*p_number6 again: " << *p_number6 << std::endl;

    // memory leak
    // this will cause memory leak
    // int *p_number7{new int{55}};
    // here reset and reinit the memory
    // p_number7 = new int{32};

    // dynamic array
    // can loop through pointers array, they live ont the heap.
    size_t size{10};
    double *p_salaries = new double[size];
    double *p_students = new (std::nothrow) double[size]{};
    double *p_scores = new (std::nothrow) double[size]{1, 2, 3, 4, 5};

    if (p_scores)
    {
        std::cout << "size of scores: " << sizeof(p_scores) << std::endl;

        for (size_t i = 0; i < size; i++)
        {
            std::cout << "value: " << p_scores[i] << ": " << *(p_scores + i) << std::endl;
        }
    }

    delete[] p_scores;
    p_scores = nullptr;
    delete[] p_students;
    p_students = nullptr;
    delete[] p_salaries;
    p_salaries = nullptr;
}
