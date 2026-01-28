#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Point.h"
#include "Welcome.h"
#include "Monster.h"
#include "MonsterGenerator.h"

//double distanceFrom(const Point& p1, const Point& p2);

int main()
{

    srand(static_cast<unsigned int>(time(0))); // используем системные часы в качестве стартового значения
	rand(); // пользователям Visual Studio: делаем сброс первого случайного числа

	Monster m = MonsterGenerator::generateMonster();
	m.print();

//    Welcome hello;
//	hello.print();

//    Point first;
//    Point second(2.0, 5.0);
//    first.print();
//    second.print();
//    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
    return 0;
}
