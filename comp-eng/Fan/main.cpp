#include <iostream>

using namespace std;

int main(){
	char y;

	cout << "You are use russian fan\nfan have 4 speed; f, m, s, and o\nwhich be of standing for fast, medium, slow, and off\ntype one speed letter, followed by enter pressing\n";
	while(y != 'o'){
		cin >> y;
		
		switch(y){
		case 'f':
			cout << "fan go fast now, is bretty gewd\nIf want change speed fan again type one speed letter, followed by enter pressing\n";
			break;
		case 'm':
			cout << "fan go medium speed now, is bretty gewd\nIf want change speed fan again type one speed letter, followed by enter pressing\n";
			break;
		case 's':
			cout << "fan go slow now, is bretty gewd\nIf want change speed fan again type one speed letter, followed by enter pressing\n";
			break;
		case 'o':
			cout << "fan is turn off now\nhave glorious day comrade\n";
			break;
		default:
			cout << "wrong input was done inputed\nis good idea check alchohol levels\n";
			break;
		}
	}
}
