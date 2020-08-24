#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main() {
    int age = 70;
    int aggeAtLastExam = 16;
    bool isNotIntoxicated = true;

    //if-else ladder
    if ( (age > 1) && (age < 16) ) {
        cout << "You can't drive!!!" << endl;
    } else if ( ! isNotIntoxicated ) {
        cout << "You can't drive!!!" << endl;
    } else if(age >= 80 && ((age > 100) || ((age - aggeAtLastExam) > 5))) {
        cout << "You can't drive" << endl;
    } else {
        cout << "You can drive" << endl;
    }

    //switch case
    int greetingOption = 2;
    
    switch (greetingOption) {

    case 1:
        cout << "Bonjour!" << endl;
        break;
    
    case 2:
        cout << "Hola!" << endl;
        break;

    case 3:
        cout << "Hallo!" << endl;
        break;
    
    default:
        cout << "Hello!" << endl;
        break;
    }

    return 0;
}