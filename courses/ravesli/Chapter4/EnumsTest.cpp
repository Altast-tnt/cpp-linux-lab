#include <iostream>
#include "Mobs.h"

std::string getMobName(Mobs mob)
{
    switch(mob)
    {
        case MOBS_ORGE:
            return "Ogre";
        case MOBS_GOBLIN:
            return "Goblin";
        case MOBS_SKELETON:
            return "Skeleton";
        case MOBS_ORC:
            return "Orc";
        case MOBS_TROLL:
            return "Troll";
        default:
            return "Undefined mob!";
    }
}

void outputMob()
{
    Mobs ogre = MOBS_ORGE;
    std::cout << "Your mob is - " << getMobName(ogre) << " defend!" << std::endl;
}
