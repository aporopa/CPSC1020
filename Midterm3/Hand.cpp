#include "Hand.h"
#include "Card.h"
#include "Deck.h"
#include <sstream>

Hand::Hand(Deck deck, int N){
    //filling the deck vector
    for(int i = 0; i < N; i++){
        hand.push_back(deck.drawCard());
    }
}

std::string Hand::printHand(){
    std::stringstream stream;

    //for loop to output the card and position in vector
    for(int i = 0; i < hand.size() ; i++){
        stream << "[" << i + 1 << "] " << hand[i].printCard() << " ";
    }

    return stream.str();
}

//return size of the hand
int Hand::getHandSize(){
    return hand.size();
}

//must do minus 1 because the vector is one less than the input num
Card Hand::dealCard(int num){
    Card humanDeal = hand.at(num - 1);
    hand.erase(hand.begin() + num - 1);

    return humanDeal;
}