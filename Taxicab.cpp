/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/2/2018
** Description: This program will receive user input and create an 
*               object that can be manipulated or adjusted via user 
*               needs. The class "Taxicab" forms the basis of this
*               program. Additionally, the objects produced will track
*               the movement of a "Taxi" to include measuring it's
*               total distance traveled and movements left and right
*               of course. An associated header file: Taxicab.hpp is 
*               also part of this program.
*********************************************************************/

#include "Taxicab.hpp" // Identify necessary header file
#include <cmath> // For "abs" function

/********************************************************************* 
** Description: Taxicab::Taxicab() - Default constructor. Initializes
*               member elements to 0 in case no user input occurs.
*********************************************************************/
Taxicab::Taxicab()
{
    xCoord=0;
    yCoord=0;
    DistanceTraveled=0;
}

/********************************************************************* 
** Description: Taxicab::Taxicab(int newXCoord, int newYCoord) - 
*               Additional non-default constructor. References user
*               input to create new object via "Taxicab" class. 
*               Initializes variable DistanceTraveled to 0.
*********************************************************************/
Taxicab::Taxicab(int newXCoord, int newYCoord)
{
    xCoord=newXCoord;
    yCoord=newYCoord;
    DistanceTraveled=0;
}

/********************************************************************* 
** Description: Taxicab::moveX(int xMove) - This function stores any
*               changes across the x axis against the "Taxi" in this
*               program. Changes are reflected in total DistanceTraveled
*               also.
*********************************************************************/
void Taxicab::moveX(int xMove)
{
        xCoord=xMove+xCoord;
        DistanceTraveled=DistanceTraveled+(std::abs(xMove));
}

/********************************************************************* 
** Description: Taxicab::moveY(int yMove) - This function stores any
*               changes across the y axis against the "Taxi" in this
*               program. Changes are reflected in total DistanceTraveled
*               also.
*********************************************************************/
void Taxicab::moveY(int yMove)
{
        yCoord=yMove+yCoord;
        DistanceTraveled=DistanceTraveled+(std::abs(yMove));
}

/********************************************************************* 
** Description: Multiple get functions included below. Ensure user has
*               access to private members of Taxicab class.
*********************************************************************/
int Taxicab::getXCoord()
{
        return (xCoord);
}

int Taxicab::getYCoord()
{
        return (yCoord);
}

int Taxicab::getDistanceTraveled()
{
    return (DistanceTraveled);
}

// Call for destruction
Taxicab::~Taxicab()
    {
    }
