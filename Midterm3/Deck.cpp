#include "Deck.h"
#include "Card.h"

Deck::Deck(){
    //filling the vector with the cards, 10 each
    for(int i = 1; i < 11; i++){
        Card dealingPurple(i, Card::purple);
        deck.push_back(dealingPurple);

        Card dealingOrange(i, Card::orange);
        deck.push_back(dealingOrange);
    }
}

//return deck vector with size function in order to return the size of the deck
int Deck::getDeckSize(){
    return deck.size();
}

//shuffle function
void Deck::shuffle(){
    srand(unsigned(time(0)));
    std::random_shuffle(deck.begin(), deck.end());
}

//when player draws card, remove it from the deck function
Card Deck::drawCard(){
    Card removeDeck = deck[0];
    deck.erase(deck.begin());
    
    return removeDeck;
}