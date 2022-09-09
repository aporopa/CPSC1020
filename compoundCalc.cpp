#include <iostream>
#include <cmath>
#include "compoundCalc.h"

//function for retirement that will be called in main
double compoundCalc(double P, double R, double t){

    double retirementSavings;

    //math for calculating the retirement savings
    retirementSavings = P * pow((1 + R), t);

    //function return is the math problem
    return retirementSavings;

}