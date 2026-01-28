#pragma once
#include "Monster.h"

class MonsterGenerator
{
public:
    static Monster generateMonster();
    static int getRandomNumber(int min, int max);
};
