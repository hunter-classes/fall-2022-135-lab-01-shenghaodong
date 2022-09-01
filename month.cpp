
#include <iostream>
#include <string>

String leap(int x){
    if(!(x % 4 == 0)){
        return "common year";
    }else if(!(x % 100 == 0)){
        return "leap year";
    }else if(!(x % 400 == 0)){
        return "common year";
    }else{
        return "leap year";
    }
}

int main(){
    int year;
    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "\n" << leap(year);
    return 0;
}