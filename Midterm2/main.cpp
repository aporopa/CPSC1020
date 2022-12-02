//This program allows the user to answer quiz questions and calculate their total points
//Abigail Poropatich
//My Class: CPSC 1020 
//Date: 10/14/2022
//Time: ~5 hours

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <string>
#include <sstream>
#include "Quiz.h"
#include "printResult.h"

//code for command line arguments
int main(int argc, char* argv[]){

        std::vector<Quiz>quizVector;
        std::ifstream myFile(argv[1]);
        std::string read;

        //if the file fails to open, kill the program
        if(!myFile.is_open()){
            std::cout << "Failure to open. Goodbye!" << std::endl;
            return 0;
        }

        //if the file successfully opens
        if(myFile.is_open()){
            //loop through each line of the file
            while(std::getline(myFile,read)){
                    //creating my own delimiter
                    std::string delimiterQ = "Q: ";
                    std::string delimiterA = "A: ";
                    size_t posQ = 0;
                    size_t posA = 0;

                    //assigning the value of the found delimiter to a variable
                    posQ = read.find(delimiterQ);
                    posA = read.find(delimiterA); 

                    //use substring to read after the delimiter has occured
                    std::string question = read.substr(posQ + 3);
                    std::getline(myFile,read);
                    std::string answer = read.substr(posA + 4);

                    //create an object of the class and add the new question and answer pair to the list
                    Quiz random(question, answer);
                    quizVector.push_back(random);
            }
        }
    
    //randomizes the questions
    srand(unsigned(time(0)));
    random_shuffle(quizVector.begin(), quizVector.end());

    int n = quizVector.size() - 1;
    int c = 0, w = 0;
    std::string userA;

    //while the string length is greater than or equal to zero
    while(n > -1){
        std::cout << quizVector[n].getQuestion() << std::endl;
        std::cout << "Type in your answer: ";
        std::getline(std::cin, userA);
        std::cout << userA.size() << std::endl;

            //if the user answer matches the question answer
            if(userA == quizVector[n].getAnswer()){
                std::cout << "Correct!" 
                          << std::endl;
                Quiz::updateScore(1); //static
                c++;
            }
            
            //if the user answer is incorrect
            else if(userA != quizVector[n].getAnswer()){
                std::cout << "Wrong! Correct answer: "
                          << quizVector[n].getAnswer()
                          << std::endl;
                Quiz::updateScore(-1); //static
                w++;
            }
        std::cout << "Current score: " 
                  << Quiz::getScore() 
                  << "\n"
                  << std::endl;

        n--;
    }
    //Reassigns n to the correct amount of questions after decrementation
    n = quizVector.size();

    //print the results and close the file
    std::cout << printResult(n,c,w);
    myFile.close();

    // std::cout << "Out put final: " << std::endl;
    // Class::quizVector() 
    //     if(Quiz::quizVector = false){
    //         std::cout << "my file close" << std::endl;
    //         if (bool == false) {
    //             std::cout << "final out put";
    //         }
    //     }
    

    return 0;
}




                