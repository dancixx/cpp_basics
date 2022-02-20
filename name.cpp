#include <iostream>
#include <string>

void addName()
{
    std::string name{"Daniel"};

    std::cout << "Add your name: ";
    std::cin >> name;

    std::cout << "Your name is: " << name << std::endl;
}

void addFullName()
{
    std::string full_name;
    int age;

    std::cout << "Type your full name: ";
    std::getline(std::cin, full_name);
    // std::cout << std::endl;

    std::cout << "Add your age: ";
    std::cin >> age;
    // std::cout << std::endl;
    std::cout << "Your full name is " << full_name << " and your age is " << age << "." << std::endl;
}