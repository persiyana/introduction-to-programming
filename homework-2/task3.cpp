#include <iostream>
#include <limits>

int main(){
    int n;
    double min = std::numeric_limits<double>::max();
    double max = std::numeric_limits<double>::min();
    double currentNum, avg = 0;
    std::cin >> n;
    for (int i = n; i > 0; i--){
        std:: cin >> currentNum;
        min = currentNum < min ? currentNum : min;
        max = currentNum > max ? currentNum : max;
        avg += currentNum;
    }
    std::cout << "Min = " << min 
                << "\nMax = " << max 
                << "\nAvrg = " << avg/n;
}