#include <iostream>
#include <string>
#include "Calculator.h"
#include "Recursion.h"


int main(int argc, char *argv[])
{

    std::cout << "There are " << argc << " arguments:\n";

    // Перебираем каждый аргумент и выводим его порядковый номер и значение
    for (int count=0; count < argc; ++count)
        std::cout << count << " " << argv[count] << '\n';

//    int num = getNum();
//    std::cout << convertToBit(num);


//    std::cout << sumNums(83569);
//    for (int count = 0; count < 8; ++count)
//		std::cout << factorial(count) << '\n';
//    calculator();
    return 0;
}
