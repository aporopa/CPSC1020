#ifndef CARD_H_
#define CARD_H_

#include <string>
#include <iostream>

class Card {
    
    public:
        enum Color {purple = 1, orange = 2};
        
        //constructors
        Card() = default;
        Card(int r, Color c);

        //getter functions
        int getRank();
        int getValue();
        Color getColor();

        //special function
        std::string printCard();

    private:
        int rank = 0;
        int value = 0;
        Color color = purple;

};
  

#endif
