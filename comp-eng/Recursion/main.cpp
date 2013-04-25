#include <iostream>

int intToBinString(int a){
    int b;
    if (a <= 1){
        std::cout << a;
        return 0;
    }
    else{
        b = a % 2;
        a = a / 2;
        std::cout << b;
        return 0 + intToBinString(a);
    }
}

int main(){
    int g = 100;
    intToBinString(100);
    std::cout << "\n";
}
