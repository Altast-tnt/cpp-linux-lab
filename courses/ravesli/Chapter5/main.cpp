#include <iostream>
#include "SwitchTest.h"
#include "Animal.h"
#include "WhileTest.h"
#include "ForTest.h"
#include "BallFall.h"
#include "GameHi-Lo.h"
#include <cstdlib>
#include <ctime>

int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    game();
    //ballFallHeight(printHeight());
    //sumTo(5);
    //printsometh();
    //printIncludeWhile();
    //printAsci();
    //printNumberOfLegs(Animal::CAT);
    //calculate(2, 6, '=\');
    return 0;
}
