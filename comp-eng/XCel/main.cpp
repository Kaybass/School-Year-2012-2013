#include <iostream>
#include <string>
#include <sstream>

int setpos(int, int);

std::string toString(int );

int partition(int* ,int ,int );

void quicksort(int* ,int ,int );

void reverse(int* , int , int );

int main(){
      char c;
      const int X = 28;
      const int LENGTH = 10;
      std::string error = "none";
      int y = 6, sum = 0;
      int arr[LENGTH];
      for(int i = 0; i < LENGTH; i++){
            arr[i] = 0;
      }
      std::cout << "\Ec";
      do{
            std::cout << "Xcel spreadsheet. Enter h to move up, k to mave down.\n" << "Enter j to edit a cell, q to quit,\na to sort in ascending order, and d for descending\n" << "Error = " << error << "\n\n";
            for(int j = 0; j < LENGTH; j++){
                  std::cout << "Cell " << toString(j + 1) << " = " << toString(arr[j]) << "\n";
                  sum += arr[j];
            }
            std::cout << "Sum = " << sum;
            setpos(X,y);
            std::cin >> c;
            switch(c){
                  case 'h':
                        y -= 1;
                        if (y < 6){
                              y = 6;
                              error = "can't go higher";
                              break;
                        }
                        else{
                              break;
                        }
                  case 'k':
                        y += 1;
                        if (y > 15){
                              y = 15;
                              error = "can't go lower";
                              break;
                        }
                        else{
                              break;
                        }
                  case 'j':
                        setpos(X,y);
                        std::cin >> arr[y - 6];
                        break;
                  case 'q':
                        break;
                  case 'a':
                        quicksort(arr,0,9);
                        reverse(arr,0,9);
                        break;
                  case 'd':
                        quicksort(arr,0,9);
                        break;
                  default:
                        error = "invalid input";
                        break;
            }
            std::cout << "\Ec";
            sum = 0;
      }while(c != 'q');
}

int setpos(int x, int y){
      std::cout << "\E["<<y<<";"<<x<<"H";
      return 0;
}

std::string toString(int s){
      std::stringstream ss;
      ss << s;
      return ss.str();
}

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

void reverse(int* arr, int a, int b){
    int temp;
    while(a < b)
        {
            temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
            a++;
            b--;
        }
}
