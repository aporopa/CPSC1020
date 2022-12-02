#include "Quiz.h"
#include <string>

//initalizing the static variable to zero
int Quiz::score = 0;

//constructor definition
Quiz::Quiz(std::string q, std::string a){
    question = q;
    answer = a;
}

//getter
std::string Quiz::getAnswer(){
    return answer;
}
std::string Quiz::getQuestion(){
    return question;
}
int Quiz::getScore(){
    return score;
}

//update score function
void Quiz::updateScore(int val){
    score += val;

    if(score < 0){
        score = 0;
    }
}