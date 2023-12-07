/* LANG : C++ */
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

string toString (double);
int toInt (string);
double toDouble (string);

int main() 
{
    string ch;

    cin >> ch;
    if (ch == "a" || ch == "e" || ch == "i" || ch == "o" || ch == "u" || ch == "A" || ch == "E" || ch == "I" || ch == "O" || ch == "U") {
        cout << "Vowel" << endl;
    } else {
        cout << "Consonant" << endl;
    }
    return 0;
}
