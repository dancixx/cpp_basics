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

    std::cout << "Type your full name: ";
    std::getline(std::cin, full_name);
    std::cout << "Your full name is: " << full_name << std::endl;
}