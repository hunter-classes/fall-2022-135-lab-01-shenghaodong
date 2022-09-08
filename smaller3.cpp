/*
Enter the first number: 23
Enter the second number: 76
Enter the third number: 37

The smaller of the three is 23
*/

#include <iostream>

int findSmaller3(int x, int y, int z){
if(x < y && x < z){
    return x;
}else if (y < x && y < z){
    return y;
}else{
    return z;
}

}

int main(){
    int num1;
    int num2;
    int num3;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;
    std::cout << "" << std::endl;
    std::cout << "The smaller of the three is " << findSmaller3(num1, num2, num3) << std::endl;
    return 0;
}
