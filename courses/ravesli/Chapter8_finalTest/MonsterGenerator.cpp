#include <string>
#include <array>
#include "MonsterGenerator.h"

int MonsterGenerator::getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0); // используем static, так как это значение нужно вычислить единожды
    // Равномерно распределяем вычисление значения из нашего диапазона
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

Monster MonsterGenerator::generateMonster()
{
    static std::array<std::string, 6> s_names {"Lone", "Igr", "Tope", "Back", "Tick", "Kole"};
    return Monster(static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPES-1)), s_names[getRandomNumber(0, 5)], getRandomNumber(1, 100));
}
