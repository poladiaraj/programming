#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main() {

    //Array
    int myFavNums[5];

    int badNums[5] = {4, 13, 14, 24, 34};

    cout << "Bad Number 1: " << badNums[0] << endl;

    char myName[7][7] = {{'R', 'a', 'j'},
                        {'P', 'o', 'l', 'a', 'd', 'i', 'a'}};

    cout << "2nd letter in 2nd array " << myName[1][1] << endl;

    cout << myName[0][3] << endl;

    return 0;
}