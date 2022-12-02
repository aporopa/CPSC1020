#ifndef QUIZ_H_
#define QUIZ_H_

#include <string>

class Quiz{

    private:
        std::string question;
        std::string answer;
        static int score;

    public:
        Quiz() = default;
        Quiz(std::string, std::string);

        //getter functions
        std::string getQuestion();
        std::string getAnswer();
        static int getScore();

        //static update score function
        static void updateScore(int val);

        //allows the print function to access the private variables
        friend std::string printResult(int questions, int correct, int wrong);
};

#endif