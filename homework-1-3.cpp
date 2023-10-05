#include <iostream>

int main () {
    int num1, num2;
    char action;

    
    do{
        std::cout << "Enter an action: ";
        std::cin >> action;
        std::cout << "Enter a number: ";
        std::cin >> num1;
        std::cout << "Enter a number: ";
        std::cin >> num2;
        if(action == '+'){
            std::cout << "= " << num1 + num2 << "\n";
        } 
        else if(action == '-'){
            std::cout << "= " << num1 - num2 << "\n";
        }
        else if(action == '*'){
            std::cout << "= " << num1 * num2 << "\n";
        }
        else if(action == '/') {
            if(num2 == 0) {
                break;
            }
            std::cout << "= " << num1 / num2 << "\n";
        }
        else{
            std::cout << "Invalid operator";
        }
    }while (action != '/' || num2 != 0);
    
    

}