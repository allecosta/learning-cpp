#include <iostream>

using namespace std;

/*
    types data: int, double, char, string e bool

*/

int main()
{

    int myNum = 38;
    cout << myNum << endl;

    double myFloatNum = 10.99;
    cout << myFloatNum << endl;

    char myLetter = 'A';
    string myText = "C++";
    bool myBoolean = true;

    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    cout << "******************************" << endl;
    cout << "INFORMAÇÕES PESSOAIS" << endl;

    int startYear = 2018;
    string professional = "Developer and information security researcher";

    cout << "I am " << professional << " desde o ano de " << startYear;

    return 0;
}