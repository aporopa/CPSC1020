#include <iostream>
#include <cmath>

using namespace std;

bool isCurzon(int num){

    if((((long)pow(2,num) + 1) % ((long)(2*num) + 1)) == 0) 
        return true;

    else
        return false;
}
int main(int argc, char*argv[]){
    int x = atoi(argv[1]);
    if(isCurzon(x)){
        cout << x << " is a curzon number" << endl;
    }

    if(!isCurzon(x)){
        cout << x << " is not a curzon number" << endl;
    }

    return  0;
}