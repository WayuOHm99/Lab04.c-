/* LANG : C++ */
#include <iostream>
#include <ctype.h>
#include <stdlib.h>

using namespace std;

int main()
{
	float num1, num2, result;
	char mark;
	
	cin >> num1 >> num2 >> mark;
	
	switch(mark) {
		case'+':
			result=num1+num2;
			break;
		case'-':
			result=num1-num2;
			break;
		case'*':
			result=num1*num2;
			break;
		case'/':
			result=num1/num2;
			break;
		case'>':
			cout << "" << endl;
			exit(0);
		default:
			cout << "Invalid mark!!" << endl;
			exit(0);
	}
	
	cout<<result;
	return 0;
	
}
