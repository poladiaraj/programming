#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

int main() {
    const double PI = 3.1415926535;

    char myGrade = 'A';

    bool isHappy = true; //comparable to 1 and false is comparable to 0

    int myAge = 24;

    float favNum = 3.123456;  //Accurate upto 5 decimanl places

    double otherFavNUm = 3.123456789012345; //Accurate upto 15 decimal places

    cout << "Fav Number " << otherFavNUm <<endl;

    //Other Types
    // * short int : 16 bits
    // * long int : 32 bits
    // * long long int : 64 bits
    // * unsigned int : Same size as signed version
    // * long double : Not less than double

    cout << "Size of int " << sizeof(myAge) << endl;
    cout << "Size of char " << sizeof(myGrade) << endl;
    cout << "Size of bool " << sizeof(isHappy) << endl;
    cout << "Size of float " << sizeof(favNum) << endl;
    cout << "Size of double " << sizeof(otherFavNUm) << endl;

    int largestInt = 2147483647; //This the largest possible value of int

    cout << "Largest int " << largestInt << endl;

    return 0;
}