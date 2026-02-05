#include <iostream>
#include <vector>
#include "Circle.h"
#include "Point.h"
#include "Triangle.h"

int getLargestRadius(std::vector<Shape*> &v)
{
    int largestRadius = 0;
    int length = v.size();
    for (int i = 0; i < length; ++i)
    {
        Circle *cir = dynamic_cast<Circle*>(v[i]);
        if (cir)
        {
            largestRadius = (largestRadius < cir->getRadius()) ? cir->getRadius() : largestRadius;
        }
    }
    return largestRadius;
}

int main()
{
    std::vector<Shape*> v;
	v.push_back(new Circle(Point(1, 2, 3), 7));
	v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
	v.push_back(new Circle(Point(4, 5, 6), 3));

    for (auto const &figure : v)
    {
        std::cout << *figure << '\n';
    }

    std::cout << "The largest radius is: " << getLargestRadius(v) << '\n';

    for (auto const &element : v)
		delete element;

//
//    Circle c(Point(1, 2, 3), 7);
//    std::cout << c << '\n';
//
//    Triangle t(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9));
//    std::cout << t << '\n';
    return 0;
}
