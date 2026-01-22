#include <iostream>
#include "Mobs.h"

std::string getMobName(Mobs mob)
{
    switch(mob)
    {
        case Mobs::OGRE:
            return "Ogre";
        case Mobs::GOBLIN:
            return "Goblin";
        case Mobs::SKELETON:
            return "Skeleton";
        case Mobs::ORC:
            return "Orc";
        case Mobs::TROLL:
            return "Troll";
        default:
            return "Undefined mob!";
    }
}

void outputMob()
{
    Mobs ogre = Mobs::OGRE;
    std::cout << "Your mob is - " << getMobName(ogre) << " defend!" << std::endl;
}
