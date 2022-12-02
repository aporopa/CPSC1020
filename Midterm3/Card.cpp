#include "Card.h"
#include <iostream>
#include <sstream>

//constructor initialization
Card::Card(int r, Color c){
    rank = r;
    color = c;
    value = rank * color;
}

//getter
int Card::getRank(){
    return rank;
}

Card::Color Card::getColor(){
    return color;
}

int Card::getValue(){
    return value;
}

//special function
std::string Card::printCard(){
    std::stringstream stream;

    if(color == 1){
        stream << "purple:" << rank;
    }
    else if(color == 2){
        stream << "orange:" << rank;
    }

    return stream.str();
}