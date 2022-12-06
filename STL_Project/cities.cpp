#include <fstream>
#include <iterator>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
using namespace pmr;


int main(int argc, char* argv[]){

    string line, myString, state, city;
    
    multimap<string, string> map;

    ifstream myFile("cities.txt");
    if(!myFile.is_open()){
        cout << "Failure to open. Goodbye!" << endl;
        return 0;
    }

    // while(getline(myFile, line)){
    //     stringstream ss(line);

    //     getline(ss, state, ',');
    //     getline(ss, city, ',');

    //     map.emplace(state, city);

    // }


    while(getline(myFile, line)){
        stringstream ss(line);
        getline(ss, state, ',');
        auto map_iter = map.find(state);

        if( map_iter == map.end()){
            map.insert({state, 1});
        }

        else{
            ++(map_iter->second);
        }

    }

    for(int i = 1; i < argc; i++){
        cout << map.count(argv[i]) << endl;
    }

    myFile.close();

    return 0;
}