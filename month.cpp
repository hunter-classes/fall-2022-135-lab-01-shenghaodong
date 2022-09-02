#include <iostream>
std::string leap(int x){
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

int days(std::string ly, int month){
    if(month == 2){
        if(ly.compare("leap year") == 0){
            return 29;
        }else{
            return 28;
        }
    }else if(month == 1 || month == 3 ||month == 5 ||month == 7 ||month == 8 || month == 10 || month == 12){
        return 31;
    }else{
        return 30;
    }
}

int main(){
    int year;
    int month;
    std::cout << "Enter year: ";
    std::cin >> year;
    std::string leapOrNot = leap(year);
    std::cout << "Enter month: ";
    std::cin >> month;
    std::cout << "\n" << days(leapOrNot, month) << " days" << std::endl;
    return 0;
}