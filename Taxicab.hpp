/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/2/2018
** Description: This header file is part of the Taxicab.cpp program.
*               This program will receive user input and create an 
*               object that can be manipulated or adjusted via user 
*               needs. The class "Taxicab" forms the basis of this
*               program. Additionally, the objects produced will track
*               the movement of a "Taxi" to include measuring it's
*               total distance traveled and movements left and right
*               of course. 
*********************************************************************/

#ifndef TAXICAB_HPP
//Include a guard
#define TAXICAB_HPP

class Taxicab
{
private:
    // Three member variables representing "Taxi" location and distance
    int xCoord, yCoord, DistanceTraveled;

public:
    // Default constructor
    Taxicab();
    // User input constructor
    Taxicab(int, int);
    
    int getXCoord();
    int getYCoord();
    int getDistanceTraveled();
    void moveX(int);
    void moveY(int);
    
    // Destructor
    ~Taxicab ();

};

#endif