#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main() {
    char myName[7][7] = {{'R', 'a', 'j'},
                        {'P', 'o', 'l', 'a', 'd', 'i', 'a'}};

    //for loop

    for (int i=0; i<10; i++) { 
        cout << i << endl;
    }
    
    for(int j=0; j<2; j++){
        for(int k=0; k<7; k++) {
            cout << myName[j][k];
        }
        cout << endl;
    }

    //While loop

    int randNum = (rand()%100) + 1;
    int i =0;
    while(randNum != 100 ) {
        i++;
        cout << randNum << ", ";
        randNum = (rand() %100) + 1;
    }

    cout << "Numbers: " << i << endl;
    int index=1;

    while(index <= 10) {
        cout << index << endl;
        index++;
    }

    //Do While loop

    string numberGuessed;
    int intNumberGuessed = 0;
    do {
        cout << "Guess between 1 and 10: ";
        
        getline(cin, numberGuessed);

        intNumberGuessed = stoi(numberGuessed);

        cout << intNumberGuessed << endl;
    } while(intNumberGuessed !=4);

    return 0;
}