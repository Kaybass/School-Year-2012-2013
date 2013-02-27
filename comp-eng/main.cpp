/*Date: 06/12/99 at 12:15:04
From: Doctor Anthony
Subject: Re: Formula for Easter

Gauss derived a formula to find the day (D) and month (M) on which 
Easter day falls given the year (T)

Below is shown the formula and its application to the year 1999

If   k = Integer part of [T/100]            k = Int[1999/100] = 19
     a = T (mod 19)                         a = 1999 (mod 19) = 4
     b = T (mod 4)                          b = 1999 (mod 4) = 3
     c = T (mod 7)                          c = 1999 (mod 7) = 4
     q = Integer part of [k/4]              q = Int[19/4] = 4
     p = Integer part of [(13+8k)/25]       p = Int[165/25] = 6
     m = (15-p+k-q) (mod 30)                m = 24 (mod 30) = 24
     d = (19a + m) (mod 30)                 d = 100 (mod 30) = 10
     n = (4+k-q) (mod 7)                    n = 19 (mod 7) = 5
     e = (2b+4c+6d+n) (mod 7)               e = 87 (mod 7) = 3

If  d+e <= 9  then  D = 22+d+e and M = 3    d+e = 10+3 = 13

If  d = 29 and e = 6
              then  D = 19 and  M = 4       (not applicable here)

If  d = 28 and e = 6 and a > 10 
              then  D = 18 and  M = 4       (not applicable here)

Otherwise  D = d+e-9  and  M = 4            D = 13-9 = 4,  M=4

So Easter day in the year 1999 was on April 4th.

- Doctor Anthony, The Math Forum*/

#include <iostream>
using namespace std;

int main(){
	int year;
	cout << "enter year for returning of the date of easter for that year\n";
	cin >> year;
	int k = year / 100;
	int a = year % 19;
	int b = year % 4;
	int c = year % 7;
	int q = k / 4;
	int p = (13 + 8 * k) / 25;
	int m = (15 - p + k - q) % 30;
	int d = (19 * a + m) % 30;
	int n = (4 + k - q) % 7;
	int e = (2 * b + 4 * c + 6 * d + n) % 7;
	
	if ( d + e <= 9 ){
		int D = 22 + d + e;
		cout << "The date is the ";
		cout << D;
		cout << " of March \n";
	}
	
	else if ( d == 29 && e == 6){
		int D = 19;
		cout << "The date is the ";
		cout <<  D;
		cout <<  " of April \n";
	}
	
	else if ( d == 28 && e == 6 && a > 10 ){
		int D = 18;
		cout << "The date is the ";
		cout <<  D;
		cout <<  " of April \n";
	}
	
	else{
		int D = d + e - 9;
		cout << "The date is the ";
		cout << D;
		cout <<  " of April \n";
	}
	return 0;
}
