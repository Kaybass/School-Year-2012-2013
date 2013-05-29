#include <iostream>
#include <string>
#include <sstream>

int setpos(int, int);

std::string toString(int );

int main(){
      char c;
      const int X = 28;
      const int LENGTH = 10;
      std::string error = "none";
      int y = 4, sum = 0;
      int arr[LENGTH];
      for(int i = 0; i < LENGTH; i++){
            arr[i] = 0;
      }
      std::cout << "\Ec";
      do{
            std::cout << "Xcel spreadsheet. Enter h to move up, k to mave down.\n" << "Enter j to edit a cell and q to quit." << " error = " << error << "\n\n";
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
                        if (y < 4){
                              y = 4;
                              error = "can't go higher";
                              break;
                        }
                        else{
                              break;
                        }
                  case 'k':
                        y += 1;
                        if (y > 13){
                              y = 13;
                              error = "can't go lower";
                              break;
                        }
                        else{
                              break;
                        }
                  case 'j':
                        setpos(X,y);
                        std::cin >> arr[y - 4];
                        break;
                  case 'q':
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