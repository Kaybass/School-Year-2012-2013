#include <iostream>
#include <string>
#include <sstream>


std::string toString(int a);

std::string intToBin(int a);

std::string reverseString(std::string s);

int main(){
    int g;
    std::cout << "Input a integer to be converted to binary: ";
    std::cin  >> g;
    std::cout << reverseString(intToBin(g)) << "\n";
}

std::string toString(int a){
    std::stringstream ss;
    ss << a;
    return ss.str();
}

std::string intToBin(int a){
    if (a <= 1){
        return toString(a);
    }
    else{
        int b = a % 2;
        a = a / 2;
        return toString(b) + intToBin(a);
    }
}

std::string reverseString(std::string s){
    return std::string ( s.rbegin(), s.rend() );
}