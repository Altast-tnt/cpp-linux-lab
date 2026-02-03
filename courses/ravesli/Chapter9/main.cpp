#include <iostream>
#include "Fraction.h"
#include "Something.h"
#include "GradeMap.h"
#include "MyString.h"
#include "Average.h"
#include "IntArray.h"
#include "FixedPoint.h"

//IntArray fillArray()
//{
//	IntArray a(6);
//	a[0] = 6;
//	a[1] = 7;
//	a[2] = 3;
//	a[3] = 4;
//	a[4] = 5;
//        a[5] = 8;
//
//	return a;
//}

void SomeTest()
{
	std::cout << std::boolalpha;
	std::cout << (FixedPoint(0.75) + FixedPoint(1.23) == FixedPoint(1.98)) << '\n'; // оба значения положительные, никакого переполнения
	std::cout << (FixedPoint(0.75) + FixedPoint(1.50) == FixedPoint(2.25)) << '\n'; // оба значения положительные, переполнение
	std::cout << (FixedPoint(-0.75) + FixedPoint(-1.23) == FixedPoint(-1.98)) << '\n'; // оба значения отрицательные, никакого переполнения
	std::cout << (FixedPoint(-0.75) + FixedPoint(-1.50) == FixedPoint(-2.25)) << '\n'; // оба значения отрицательные, переполнение
	std::cout << (FixedPoint(0.75) + FixedPoint(-1.23) == FixedPoint(-0.48)) << '\n'; // второе значение отрицательное, никакого переполнения
	std::cout << (FixedPoint(0.75) + FixedPoint(-1.50) == FixedPoint(-0.75)) << '\n'; // второе значение отрицательное, возможно переполнение
	std::cout << (FixedPoint(-0.75) + FixedPoint(1.23) == FixedPoint(0.48)) << '\n'; // первое значение отрицательное, никакого переполнения
	std::cout << (FixedPoint(-0.75) + FixedPoint(1.50) == FixedPoint(0.75)) << '\n'; // первое значение отрицательное, возможно переполнение
}

int main()
{

    SomeTest();

	FixedPoint a(-0.48);
	std::cout << a << '\n';

	std::cout << -a << '\n';

	std::cout << "Enter a number: "; // введите 5.678
	std::cin >> a;

	std::cout << "You entered: " << a << '\n';

//    FixedPoint a(37, 58);
//	std::cout << a << '\n';
//
//	FixedPoint b(-3, 9);
//	std::cout << b << '\n';
//
//	FixedPoint c(4, -7);
//	std::cout << c << '\n';
//
//	FixedPoint d(-5, -7);
//	std::cout << d << '\n';
//
//	FixedPoint e(0, -3);
//	std::cout << e << '\n';
//
//	std::cout << static_cast<double>(e) << '\n';
//
//    FixedPoint a1(0.03);
//	std::cout << a1 << '\n';
//
//	FixedPoint b1(-0.03);
//	std::cout << b1 << '\n';
//
//	FixedPoint c1(4.01);
//	std::cout << c1 << '\n';
//
//	FixedPoint d1(-4.01);
//	std::cout << d1 << '\n';

//    IntArray a = fillArray();
//	std::cout << a << '\n';
//
//	IntArray b(1);
//	a = a;
//	b = a;
//
//	std::cout << b << '\n';

//    Average avg;
//
//	avg += 5;
//	std::cout << avg << '\n'; // 5 / 1 = 5
//
//	avg += 9;
//	std::cout << avg << '\n'; // (5 + 9) / 2 = 7
//
//	avg += 19;
//	std::cout << avg << '\n'; // (5 + 9 + 19) / 3 = 11
//
//	avg += -9;
//	std::cout << avg << '\n'; // (5 + 9 + 19 - 9) / 4 = 6
//
//	(avg += 7) += 11; // выполнение цепочки операций
//	std::cout << avg << '\n'; // (5 + 9 + 19 - 9 + 7 + 11) / 6 = 7
//
//	Average copy = avg;
//	std::cout << copy << '\n';

//    MyString string("Hello, world!");
//    std::cout << string(7, 6);

//    GradeMap grades;
//	grades["John"] = 'A';
//	grades["Martin"] = 'B';
//	std::cout << "John has a grade of " << grades["John"] << '\n';
//	std::cout << "Martin has a grade of " << grades["Martin"] << '\n';

//    Something something;
//
//	if (!something)
//		std::cout << "Something is null.\n";
//	else
//		std::cout << "Something is not null.\n";

//	Fraction f1;
//	std::cout << "Enter fraction 1: ";
//	std::cin >> f1;
//
//	Fraction f2;
//	std::cout << "Enter fraction 2: ";
//	std::cin >> f2;
//
//	std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';
    return 0;
}
