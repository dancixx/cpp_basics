#include <iostream>

int main()
{
    int int_data{33};
    double double_data{55};

    // refs
    int &ref_int_data{int_data};
    double &ref_double_data{double_data};

    // print
    std::cout << "int_data: " << int_data << std::endl;
    std::cout << "int_data: " << &int_data << std::endl;
    std::cout << "double_data: " << double_data << std::endl;
    std::cout << "double_data: " << &double_data << std::endl;

    std::cout << "int_data: " << ref_int_data << std::endl;
    std::cout << "int_data: " << &ref_int_data << std::endl;
    std::cout << "double_data: " << ref_double_data << std::endl;
    std::cout << "double_data: " << &ref_double_data << std::endl;

    int_data = 111;
    double_data = 67.2;

    std::cout << "int_data: " << int_data << std::endl;
    std::cout << "int_data: " << &int_data << std::endl;
    std::cout << "double_data: " << double_data << std::endl;
    std::cout << "double_data: " << &double_data << std::endl;

    std::cout << "int_data: " << ref_int_data << std::endl;
    std::cout << "int_data: " << &ref_int_data << std::endl;
    std::cout << "double_data: " << ref_double_data << std::endl;
    std::cout << "double_data: " << &ref_double_data << std::endl;

    ref_int_data = 1011;
    ref_double_data = 2200.12;

    std::cout << "int_data: " << ref_int_data << std::endl;
    std::cout << "int_data: " << &ref_int_data << std::endl;
    std::cout << "double_data: " << ref_double_data << std::endl;
    std::cout << "double_data: " << &ref_double_data << std::endl;

    // compare refs and pointers

    // message to operating system that the main executed
    return 0;
}
