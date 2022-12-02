//This program allows the user to answer quiz questions and calculate their total points
//Abigail Poropatich
//My Class: CPSC 1020 
//Date: 11/30/2022
//Time: ~10 hours

#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include <iostream>
#include <vector>

int main() {

  //point vectors
  std::vector<int> pointsH;
  std::vector<int> pointsC;

  //variable initialization
  int rounds = 0, winsH = 0, winsC = 0, adderH = 0, adderC = 0;
  int count = 0;
  char userInput;

//do while loop for asking user questions
do{
  //count = 0;
  //creating a variable of type deck that calls the shuffle function
  Deck cards;
  cards.shuffle();

  //beginning of the game
  std::cout << "Welcome to TigerGame!" << std::endl
            << "How many rounds to play (1-10)?";
  std::cin  >> rounds;
    //input validation
    while(rounds > 10 || rounds < 1){
      std::cout << "ERROR. Please try again.";
      std::cin >> rounds;
    }
  
  //creating the two players with their own set of cards according to the user input length of the game
  Player human(cards, rounds);
  Player computer(cards, rounds);

  std::cout << "The deck has been shuffled and each player has drawn " 
            << rounds << " card(s)\n\n";
  
  //for loop to iterate through the rounds
  for(int i = 0; i < rounds; i++){
    count++;
    Card dealC = computer.hand.dealCard(1);
    int whichCard;

    std::cout << "Round " << i + 1 << "\n-------\n"
              << "The computer plays: " << dealC.printCard() << std::endl
              << "Your hand: " << human.hand.printHand() << std::endl
              << "Which card do you want to play?" << std::endl;
    
    std::cin  >> whichCard;
      while(whichCard < 0 || (whichCard > rounds - i)){
        std::cout << "ERROR. Please try again.";
        std::cin >> whichCard;
      }
    
    Card dealH = human.hand.dealCard(whichCard);
    std::cout << "You played: " << dealH.printCard() << std::endl;

    if(dealH.getValue() < dealC.getValue()){
        std::cout << "The computer wins this round!\n\n";
        computer.score = computer.score + dealC.getValue();
        winsC++;
    }
    else if(dealH.getValue() > dealC.getValue()){
        std::cout << "You win this round!\n\n";
        human.score = human.score + dealH.getValue();
        ++winsH;
    }
    else if(dealH.getValue() == dealC.getValue()){
        std::cout << "Tie!\n\n";
    }

    std::cout << "Current scores:\n"
              << "Human: " << human.score << std::endl
              << "Computer: " << computer.score
              << "\n\n";

    pointsH.push_back(human.score);
    pointsC.push_back(computer.score);
  }

  std::cout << "FINAL SCORE:" << std::endl
            << "Human: " << human.score << std::endl
            << "Computer: " << computer.score << std::endl;

  if(human.score < computer.score){
    std::cout << "Computer has won!" << std::endl;
  }
  else if(human.score > computer.score){
    std::cout << "Human has won!" << std::endl;
  }
  else if(human.score == computer.score){
    std::cout << "Tie!" << std::endl;
  }
  
  std::cin.ignore(200, '\n');

  std::cout << "Do you want to play again? (Y/N)";
  std::cin >> userInput;
    while(userInput != 'Y' && userInput != 'y' && userInput != 'N' && userInput != 'n'){
      std::cout << "ERROR! Please try again.";
      std::cin >> userInput;
    }
    if(userInput == 'N' || userInput == 'n'){
      std::cout << "\nTHANKS FOR PLAYING! GOODBYE.\n\n";
      break;
    }

} while(userInput == 'Y' || userInput == 'y');

for(int h : pointsH)
    adderH += h;

for(int c : pointsC)
    adderC += c;

std::cout << "GAME SUMMARY:\n"
          << "\tGames played: " << count << "\n"
          << "\tHuman wins: " << winsH << "\n"
          << "\tComputer wins: " << winsC << "\n"
          << "\tPoints per round: \n\n";
          for(int i = 0; i < (count); i++){
            std::cout << "\t\tRound " << i + 1 << ":" << std::endl
                      << "\t\t\tHuman: " << pointsH[i] << std::endl
                      << "\t\t\tComputer: " << pointsC[i] << "\n\n";
          }
std::cout << "\tTotal human points: " << adderH << std::endl
          << "\tTotal computer points: " << adderC << std::endl;

  return 0;
}
