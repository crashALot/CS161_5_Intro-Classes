#include <iostream>
#include "Box.hpp"

int main()
{
    Box box1(2.4, 7.1, 5.0);
    Box box2;
    double volume1 = box1.calcVolume();
    double surfaceArea1 = box1.calcSurfaceArea();
    double volume2 = box2.calcVolume();
    double surfaceArea2 = box2.calcSurfaceArea();
    std::cout << volume1 << std::endl;
    std::cout << volume2 << std::endl;
    std::cout << surfaceArea1 << std::endl;
    std::cout << surfaceArea2 << std::endl;
	return 0;
}