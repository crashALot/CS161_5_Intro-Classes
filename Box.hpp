/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/2/2018
** Description: This program will create an object "box" that can be 
*               edited with changes made to its height, length, and
*               width. The program will then calculate the volume
*               of the box and it's surface area. An associated header
*               file: Box.hpp is also part of this program.
*********************************************************************/

#ifndef BOX_HPP
// Include a guard
#define BOX_HPP

#include <iostream>

class Box
{
private:
    // Only three variables needed for a rectangle problem
    double width, height, length;

public:
    // Default constructor
    Box();
    // User adjusted constructor
    Box(double, double, double);
    // Get initial side distances, must incorporate default and user-adjusted
    void setHeight();
    void setWidth();
    void setLength();
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
    
    // Calculate volume
    double calcVolume();
    // Calculate surface area
    double calcSurfaceArea();
 
    // Destructor ends it all
    ~Box ();
};

#endif