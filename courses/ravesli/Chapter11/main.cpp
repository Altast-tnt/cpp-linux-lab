#include <iostream>
#include "Apple.h"
#include "Banana.h"
#include "GrannySmith.h"

int main()
{

	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
//    const Apple a("Red delicious", "red", 7.3);
//	std::cout << a;
//
//	const Banana b("Cavendish", "yellow");
//	std::cout << b;
    return 0;
}
