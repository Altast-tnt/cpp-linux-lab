#include <iostream>
#include "Numbers.h"
#include "StringTest.h"
#include "EnumsTest.h"
#include "StructTest.h"
#include "FinalTest.h"
#include <clocale>

int main()
{
    setlocale(LC_ALL, "Russian");

    printMonster(Mobs::GOBLIN, inputCharacterisics());
    printMonster(Mobs::ORC, inputCharacterisics());

    //multiplyFractions(inputFraction(), inputFraction());

    //calculateEarningPerDay(inputValues());

    //typedef int status_t;
    //status_t editData();

    //using status_t = int;
    //status_t editData();

    //outputMob();


    //calculateYearsLive(inputFullName(), inputAge());


    //int x = inputNum();
    //int y = inputNum();
    //printNums(x, y);
    return 0;
}
