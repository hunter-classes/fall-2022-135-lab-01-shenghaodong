/*
Enter the first number: 15
Enter the second number: -24

The smaller of the two is -24
*/

#include <iostream>

int findSmaller(int x, int y){
if(x > y){
    return y;
}else{
    return x;
};

}

int main(){
    int num1;
    int num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "" << std::endl;
    std:: cout << "The smaller of the two is " << findSmaller(num1, num2) << std::endl;
    return 0;
}
