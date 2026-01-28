#include <iostream>
#include "Numbers.h"
#include "Stack.h"
#include "Ball.h"

int main()
{

    Ball def;
    def.print();

	Ball black("black");
	black.print();

	Ball thirty(30.0);
	thirty.print();

	Ball blackThirty("black", 30.0);
	blackThirty.print();

//	Stack stack;
//	stack.reset();
//
//	stack.print();
//
//	stack.push(3);
//	stack.push(7);
//	stack.push(5);
//	stack.print();
//
//	stack.pop();
//	stack.print();
//
//	stack.pop();
//	stack.pop();
//
//	stack.print();


//    Numbers point1;
//    point1.setValues(3.0, 4.0, 5.0);
//
//    Numbers point2;
//    point2.setValues(3.0, 4.0, 5.0);
//
//    if (point1.isEqual(point2))
//        std::cout << "point1 and point2 are equal\n";
//    else
//        std::cout << "point1 and point2 are not equal\n";
//
//    Numbers point3;
//    point3.setValues(7.0, 8.0, 9.0);
//
//    if (point1.isEqual(point3))
//        std::cout << "point1 and point3 are equal\n";
//    else
//        std::cout << "point1 and point3 are not equal\n";

    return 0;
}
