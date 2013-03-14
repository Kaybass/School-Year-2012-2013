#include <iostream>

using namespace std;

// This partitions the array for the quicksort
int partition(int* input, int p, int r)
{
    int pivot = input[r];

    while ( p < r )
    {
        while ( input[p] < pivot )
            p++;

        while ( input[r] > pivot )
            r--;

        if ( input[p] == input[r] )
            p++;
        else if ( p < r )
        {
            int tmp = input[p];
            input[p] = input[r];
            input[r] = tmp;
        }
    }

    return r;
}

// This is a quicksort
void quicksort(int* input, int p, int r)
{
    if ( p < r )
    {
        int j = partition(input, p, r);        
        quicksort(input, p, j-1);
        quicksort(input, j+1, r);
    }
}

int main(){
	int numbers[5];

	cout << "input a number and press enter, 5 times\n";

	for (int i = 0; i < 5; ++i){
		cin >> numbers[i];
	}

	quicksort(numbers,0,4);

	cout << "The minimum value is " << numbers[0];
	if (numbers[0] % 2 == 0){
		cout << " and it is an even value.\n";
	}
	else{
		cout << " and it is an odd value.\n";
	}

	cout << "The maximum value is " << numbers[4];
	if (numbers[4] % 2 == 0){
		cout << " and it is an even value.\n";
	}
	else{
		cout << " and it is an odd value.\n";
	}
	return 0;
}
