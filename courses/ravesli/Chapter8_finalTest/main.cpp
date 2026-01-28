#include <iostream>
#include "Point.h"

double distanceFrom(const Point& p1, const Point& p2);

int main()
{
    Point first;
    Point second(2.0, 5.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
    return 0;
}
