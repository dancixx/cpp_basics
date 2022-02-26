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
    int number = 3;
    double double_mumber = 3.4;
    int *p_number{&number}; // this will nullptr
    double *p_double_number = &double_mumber;

    std::cout << number << "-" << p_number << std::endl;
    std::cout << double_mumber << "-" << p_double_number << std::endl;

    // dereferencing pointer
    int *p_number2 = nullptr;
    int int_data = 56;
    p_number2 = &int_data;

    std::cout << *p_number2 << std::endl; // ref to variable through the pointer

    // char pointers
    const char *message = "Hello world!";              // cant be modified
    std::cout << "message: " << *message << std::endl; // ref to variable through the pointer
}
