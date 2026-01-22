#ifndef MOBS_H
#define MOBS_H
#include <string>

enum class Mobs
{
    OGRE,
    GOBLIN,
    SKELETON,
    ORC,
    TROLL,
};

struct IntroduceMob
{
    std::string name {""};
    int health {0};
};

#endif // MOBS_H
