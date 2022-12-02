#ifndef HAND_H_
#define HAND_H_

#include <vector>
#include <string>
#include <sstream>
#include "Card.h"
#include "Deck.h"

class Hand{

    private:
        //computer or human hand vector
        std::vector<Card>hand;

    public:
        //constructors
        Hand() = default;
        Hand(Deck deck, int N);

        //getter function
        int getHandSize();

        //special functions
        std::string printHand();
        Card dealCard(int num);
};

#endif 
