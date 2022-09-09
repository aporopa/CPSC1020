//This lab gives the user the opportunity to calculate the area of various different squares with their own input
//Abigail Poropatich
//My Class: CPSC 1021 
//Date: 09/09/2022
//Time: ~15 minutes

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //variables
    const double pi = 3.14159;
    int userInput;
    double squareLength;
    double squareArea;
    double circleRadius;
    double circleArea;
    double triangleLength;
    double triangleHeight;
    double triangleArea;

    //hard coded menu options
    cout << "Program to calculate areas of objects" << endl;
    cout << "        1 -- square" << endl;
    cout << "        2 -- circle" << endl;
    cout << "        3 -- right triangle" << endl;
    cout << "        4 -- quit" << endl;
    cout << "\n";

    //prompt user for menu choice
    cin >> userInput;

    if(userInput == 1)
    {
        //prompt user for length of the square
        cin >> squareLength;
        cout << "Length of the square: " << squareLength << endl;

        //compute and output square area
        squareArea = squareLength * squareLength;
        cout << "Area = " << fixed << setprecision(2) << squareArea << endl;
    }

    else if(userInput == 2)
    {
        //prompt user for radius
        cin >> circleRadius;
        cout << "Radius of the circle: " << circleRadius << endl;

        //compute and output circle area
        circleArea = pi * (circleRadius * circleRadius);
        cout << "Area = " << fixed << setprecision(2) << circleArea << endl;

    }

    else if(userInput == 3)
    {
        //prompt user for triangle length
        cin >> triangleLength;
        cin >> triangleHeight;
        cout << "Length of the triangle: " << triangleLength << endl;
        cout << "Height of the triangle: " << triangleHeight << endl;

        //compute and output triangle area
        triangleArea = (1.0/2.0) * (triangleLength * triangleHeight);
        cout << "Area = " << fixed << setprecision(2) << triangleArea << endl;

    }

    else if(userInput == 4)
    {
        //quit option
        return 0;
    }

    else
    {
        //error choice
        cout << "You entered an invalid choice. Good bye!" << endl;
        return 0;
    }



    return 0;
}