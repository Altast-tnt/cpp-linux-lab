#include <iostream>
#include "MassivesTest.h"


//namespace Animals
//{
//    enum Animal
//    {
//        CHICKEN,
//        LION,
//        GIRAFFE,
//        ELEPHANT,
//        DUCK,
//        SNAKE,
//        MAX_ANIMAL,
//    };
//}


int main()
{


    int scores[] = { 73, 85, 84, 44, 78 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);
    printStudentScore(scores, numStudents);

    int massive[] = {7, 5, 6, 4, 9, 8, 2, 1, 3};
    const int massiveLength = sizeof(massive) / sizeof(massive[0]);
    printMassivesElements(massive, massiveLength);

//    int animals[Animals::MAX_ANIMAL] {2, 4, 4, 4, 2, 0};
//    std::cout << "The ELEPHANT has " << animals[3] << " legs.";
//    double tempOfEveryDay[365] = {0.0};

    return 0;
}
