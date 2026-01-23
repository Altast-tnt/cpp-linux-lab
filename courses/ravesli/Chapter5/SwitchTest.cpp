#include <iostream>
#include "Animal.h"

void calculate(int x, int y, char operate)
{
    switch(operate)
    {
        case '+':
            std::cout << "The answer x " << operate << " y = " << x + y;
            break;
        case '-':
            std::cout << "The answer x " << operate << " y = " << x - y;
            break;
        case '*':
            std::cout << "The answer x " << operate << " y = " << x * y;
            break;
        case '/':
            std::cout << "The answer x " << operate << " y = " << x / y;
            break;
        case '%':
            std::cout << "The answer x " << operate << " y = " << x % y;
            break;
        default:
            std::cout << "calcelate(): Invalid operator!\n";
            break;
    }
}



std::string getAnimalName(Animal animal)
{
    switch(animal)
    {
        case Animal::CAT:      return "cat";
        case Animal::PIG:      return "pig";
        case Animal::DOG:      return "dog";
        case Animal::CHICKEN:  return "chicken";
        case Animal::GOAT:     return "goat";
        case Animal::OSTRICH:  return "ostrich";
        default:               return "getAnimalName(): Unknown animal!";
    }
}

void printNumberOfLegs(Animal animal)
{
    switch(animal)
    {
        case Animal::CAT:
        case Animal::PIG:
        case Animal::DOG:
        case Animal::GOAT:
            std::cout << "A " << getAnimalName(animal) << " has 4 legs\n";
            break;
        case Animal::CHICKEN:
        case Animal::OSTRICH:
            std::cout << "A " << getAnimalName(animal) << " has 2 legs\n";
            break;
        default:
            std::cout << "getAnimalName(): Unknown animal!\n";
            break;
    }
}
