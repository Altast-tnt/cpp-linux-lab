#include <iostream>
#include "Mobs.h"
#include "EnumsTest.h"
#include <limits>

IntroduceMob inputCharacterisics()
{
    IntroduceMob someMob;
    std::cout << "Enter mob`s name: ";
    std::getline(std::cin, someMob.name);

    do
    {
        std::cout << "Enter mob`s health: ";
        std::cin >> someMob.health;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // чистка буфеоа
    } while (someMob.health <= 0);
    return someMob;

}


void printMonster(Mobs mob, IntroduceMob someMob)
{
    std::cout << "This " << getMobName(mob) << " is named " << someMob.name << " and has " << someMob.health << " health.\n";
}
