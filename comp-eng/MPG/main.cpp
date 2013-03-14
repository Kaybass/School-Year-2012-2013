#include <iostream>

using namespace std;

int main(){
	double a, b, c;

	char d = 'y';

	while ( d == 'y' ){
		cout << "Enter the gallons used: ";
		cin >> a;
		cout << "\nEnter the miles driven: ";
		cin >> b;
		c = b / a;
		cout << "\nThe MPG for this trip was " << c;
		cout << "\nWould you like to calculate another trip? (y/n) ";
		cin >> d;
	}
}
