#include <sstream>
#include <string>
#include "Quiz.h"
#include "printResult.h"

std::string printResult(int questions, int correct, int wrong){
    std::stringstream stream;

    //string stream output of integers and strings
    stream << "Number of questions: " << questions << "\n"
           << "Number correct answers: " << correct << "\n"
           << "Number wrong answers: " << wrong << "\n"
           << "Final score: " << Quiz::getScore() 
           << std::endl;

    return stream.str();
}
