#include <iostream>

std::string inputFullName()
{
    std::cout << "Enter your fullname: ";
    std::string fullName;
    std::getline(std::cin, fullName);
    return fullName;
}

int inputAge()
{
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    std::cin.ignore(32767, '\n');
    return age;
}

void calculateYearsLive(std::string fullName, int age)
{
    std::cout << "You've lived " << static_cast<float>(age) / fullName.length() << " years for each letter in your name." << std::endl;
}
