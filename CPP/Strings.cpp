#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main() {
    // char happyArray[6] = {'H','a','p','p','y','\0'}; //C way

    // string birthdayString= " Birthday";

    // cout << happyArray + birthdayString << endl;

    // string yourName;

    // cout << "What is your name: ";
    // getline(cin, yourName);

    // cout << "Hello " << yourName << endl;

    // double eulersConstant = 0.57721;

    // string eulerGuess;

    // double eulerGuessDouble;

    // cout << "What is Euler's Constant? ";
    // getline(cin, eulerGuess);

    // eulerGuessDouble = stod(eulerGuess);

    // if(eulerGuessDouble == eulersConstant){
    //     cout << "You are right!!!" << endl;
    // } else {
    //     cout << "You are wrong!!!" << endl;
    // }

    // cout << "Size of String " << eulerGuess.size() << endl;
    // cout << "Is string empty " << eulerGuess.empty() << endl;
    // cout << eulerGuess.append(" was your guess") << endl;

    //Comparison Function
    string dogString = "dog";
    string catString = "cat";

    cout << dogString.compare(catString) << endl;
    cout << dogString.compare(dogString) << endl;
    cout << catString.compare(dogString) << endl;

    string yourName;

    cout << "What is your name: ";
    getline(cin, yourName);

    cout << "Hello " << yourName << endl;

    string wholeName = yourName.assign(yourName);
    cout << wholeName << endl;

    string firstName = wholeName.assign(wholeName, 0, 2);
    cout << firstName << endl;

    int lastNameIndex = yourName.find("Poladia", 0);

    cout << "Index for last name" << lastNameIndex << endl;
    
    yourName.insert(4, "Jayant");
    cout << yourName << endl;

    yourName.erase(6,7);
    cout << yourName << endl;

    yourName.replace(6,7, "Shah");

    return 0;
}