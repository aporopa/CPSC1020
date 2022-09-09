//This lab gives the user the opportunity 
//to calculate the amount they will have in their retirement savings

//Abigail Poropatich
//My Class: CPSC 1021 
//Date: 09/09/2022
//Time: ~20 minutes

#include <iostream>
#include <iomanip>
#include <cmath>
#include "compoundCalc.h"

using namespace std;

//main function
int main(){

    //variables to be used in the function for user input
    double principleValue; 
    double interestRate; 
    double yearsInAccount;

    //prompting the user for data
    cout << "Please enter your present value, interest rate, and years the money will be left in the account." << endl;
    cin >> principleValue;
    cin >> interestRate;
    cin >> yearsInAccount;

    //utilizing the function with the users input
    cout << "Your retirement savings will be $" << compoundCalc(principleValue, interestRate, yearsInAccount) << fixed << setprecision(2) << endl;

    return 0;
}