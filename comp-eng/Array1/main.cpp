#include <iostream>
#include <string>

int drawtable(int*, std::string* );

int setpos(int, int );

int main(){
	std::string toplel[9] = {
			"$200-$299 = ",
			"$300-$399 = ",
			"$400-$499 = ",
			"$500-$599 = ",
			"$600-$699 = ",
			"$700-$799 = ",
			"$800-$899 = ",
			"$900-$999 = ",
			"$1000 & over = "
		};
	int arr[9] = {0,0,0,0,0,0,0,0,0};
	int x,y;

	do{ // this is awful and I should feel awful
		drawtable(arr,toplel);
		std::cin >> x;
		if (x == -1){
			std::cout << "\Ec";
			break;
		}
		x = x * .09 + 200;
		y = x / 100 - 2;
		if (y > 8){
			y = 8;
		}
		arr[y] += 1;
	}while(true);
	return 0;
}

int drawtable(int* Iarr,std::string* Sarr){
	std::cout << "\Ec";
	std::cout << "Salary Statistics:\nEnter a the sales earned for every salesman, enter -1 to quit: \n";
	for(int i = 0; i < 9; i++){
		std::cout << Sarr[i] << Iarr[i] << '\n'; 
	}
	setpos(68,2);
	return 0;
}

int setpos(int x, int y){
      std::cout << "\E["<<y<<";"<<x<<"H";
      return 0;
}