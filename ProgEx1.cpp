//if odd 3n+1 if even divide by 2
#include <iostream>
using namespace std;

void Hailstone(int number){
    cout << number << " ";
    while(number > 0){
        if(number % 2 == 0){
            number = number / 2;
            cout << number << " ";

            if(number == 1)
                return;
        }
        if(!(number % 2 == 0)){
            number = (3 * number) + 1;
            cout << number << " ";
        }
    }
    if(number <= 0){
        cout << "Must enter a positive integer";
        return;
    }
}

int HailstoneNum(int userInput){
    int count = 0;
    while(userInput > 1){
        if(userInput % 2 == 0){ 
                userInput = userInput / 2;

            }
            else{
                userInput = (userInput * 3) + 1; 

            }
            count++;
        }
        
    return count;
}

int HailstoneHighest(int testing){
    int max = testing;
    while(testing > 1){
        if(testing % 2 == 0)
                testing = testing / 2;

        else
            testing = (testing * 3) + 1; 

        if(testing > max){
            max = testing;
        }
    }
    return max;
}

int main(){

    int numbahhh;

    cin >> numbahhh;
    Hailstone(numbahhh);
    HailstoneNum(numbahhh);
    cout << "\n" << "Amount of iterations: " << HailstoneNum(numbahhh) << "\n" << "Largest value: " << HailstoneHighest(numbahhh) << endl;

    return 0;
}
