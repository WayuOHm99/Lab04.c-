/* LANG : C++ */
#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(){
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
			cout << "ERROR" << endl;
			exit(0);
		default:
			cout << "Incalid make!!" << endl;
			exit(0);
	}
	
	cout<<result;
	return 0;
	
}
