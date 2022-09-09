//This lab gives the user the opportunity 
//to calculate the amout of points they have for using Clemsons ride share program

//Abigail Poropatich
//My Class: CPSC 1021 
//Date: 09/09/2022
//Time: ~20 minutes

#include <iostream>

using namespace std;

int main(){

    //variables for user input and output
    int bikeRides;
    int outputPoints;

    cout << "Please enter the amount of bike rides you have taken this semester!" << endl;

    //goto keyword for the error statement
    beginning: 

    cin >> bikeRides;

    //Branches for the amount of points needed
    if(bikeRides == 0)
    {
        outputPoints = 0;
        cout << "You earned "<< outputPoints << " points this semester" << endl;
    }

    else if(bikeRides == 1)
    {
        outputPoints = 3;
        cout << "You earned "<< outputPoints << " points this semester" << endl;
    }

    else if(bikeRides == 2)
    {
        outputPoints = 10;
        cout << "You earned "<< outputPoints << " points this semester" << endl;
    }

    else if(bikeRides == 3)
    {
        outputPoints = 15;
        cout << "You earned "<< outputPoints << " points this semester" << endl;
    }

    else if(bikeRides == 4)
    {
        outputPoints = 30;
        cout << "You earned "<< outputPoints << " points this semester" << endl;
    }

    else if(bikeRides >= 5)
    {
        outputPoints = 50;
        cout << "You earned "<< outputPoints << " points this semester" << endl;
    }

    //error branch, will goto the beginning statement in order to get more input from the user
    else{
        cout << "Please enter a number greater than or equal to zero." << endl;
        goto beginning;
    }

    return 0;
}