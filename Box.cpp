/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/2/2018
** Description: This header file is part of the Box.cpp program. This
*               program will edit an object "box" that can be 
*               created with changes made to its height, length, and
*               width. The program will then calculate the volume
*               of the box and it's surface area. 
*********************************************************************/

#include "Box.hpp" // Identify necessary header file

/********************************************************************* 
** Description: 
*               Box::Box() 
*               Default constructor. Returns a rectangular box object
*               with all values set to 1.
*********************************************************************/  
Box::Box()
    {
        setHeight();
        setWidth();
        setLength(); 
    }
    
/********************************************************************* 
** Description: 
*               Box::Box(double h, double l, double w)
*               Non-default constructor. Returns a rectangular box
*               object with user input side lengths. 
*********************************************************************/
Box::Box(double h, double l, double w)
    {
        setHeight(h);
        setWidth(w);
        setLength(l); 
    }

/********************************************************************* 
** Description: Multiple set functions required to alter private
*               variables in class "Box".
*********************************************************************/
void Box::setHeight()
    {
        height=1.0;
    }
void Box::setHeight(double h)
    {
        height=h; // Keep user value
    }
void Box::setWidth()
    {
        width=1.0;
    }
void Box::setWidth(double w)
    {
        width=w; // Change to user value
    }
void Box::setLength()
    {
        length=1.0;
    }
void Box::setLength(double l)
    {
        length=l; // Change to user value
    }

/********************************************************************* 
** Description:
*               double Box::calcVolume()
*               This function takes user input derived from the "Box"
*               class and determines the volume of a box with said
*               values. Total volume returned after completion.
*********************************************************************/
double Box::calcVolume()
    {
        double volume;
        volume=width*height*length;
        return (volume);
    }

/********************************************************************* 
** Description:
*               Box::calcSurfaceArea()
*               This function takes user input derived from the "Box"
*               class and determines the surface area of a box with said
*               values. Total surface area returned after completion.
*********************************************************************/    
double Box::calcSurfaceArea()
    {
        // Multiple variables needed within scope of function to accomodate summations
        double sideArea, topBottomArea, endArea, totalArea;
        sideArea=((width*height)*2);
        topBottomArea=((length*width)*2);
        endArea=((length*height)*2);
        totalArea=(sideArea+topBottomArea+endArea);
        return (totalArea);
    }

// Call the destructor
Box::~Box()
    {
    }