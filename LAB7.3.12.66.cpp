/* LANG : C++ */
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int a, b, c;

    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        switch (a == b && b == c ? 1 : (a == b || b == c ? 2 : 3)) 
		{
            case 1:
                cout << "Equilateral" << endl;
                break;
            case 2:
                cout << "Isosceles" << endl;
                break;
            case 3:
                cout << "Scalene" << endl;
                break;
        }
    } 
		else{
        	cout << "No" << endl;
			}

    return 0;
}
