#include <iostream>

int nthFibonacci(int n){
    if(n<0){
        return 0;
    }
    if(n<=1){
        return n;
    }
    return nthFibonacci(n-1) + nthFibonacci(n-2);
    
}

int main() {
    int n;
    std::cin >> n;
    std::cout << nthFibonacci(n-1);
}