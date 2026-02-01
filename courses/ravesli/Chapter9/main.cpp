#include <iostream>
#include "Fraction.h"
#include "Something.h"
#include "GradeMap.h"

int main()
{

    GradeMap grades;
	grades["John"] = 'A';
	grades["Martin"] = 'B';
	std::cout << "John has a grade of " << grades["John"] << '\n';
	std::cout << "Martin has a grade of " << grades["Martin"] << '\n';

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
