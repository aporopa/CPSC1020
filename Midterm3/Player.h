// Note: There is no Player.cpp file.
// The player class is simple enough to
// implement everything in Player.h

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Hand.h"
#include "Deck.h"


class Player{
    public:
        //public member variables
        Hand hand;
        int score = 0;

        //constructors
        Player() = default;
        Player(Deck deck, int N) : hand(deck, N) {};

};
  

#endif 
