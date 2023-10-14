#include <iostream>

int main (){
    int number, reversedNum = 0;
    std::cin >> number;
    while (number>0)
    {
        reversedNum += number%10;
        reversedNum *= 10;
        number/=10;
    }
    std::cout << reversedNum/10;
}