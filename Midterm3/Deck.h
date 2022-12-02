#ifndef DECK_H_
#define DECK_H_

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "Card.h"

class Deck{
    private:
        //card vector
        std::vector<Card> deck;
    
    public:
        //constructor
        Deck();

        //getter functions
        int getDeckSize();

        //special functions
        void shuffle();
        Card drawCard();
        
};
  

#endif
