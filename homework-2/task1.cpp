#include <iostream>

int main () {
    char symbol;
    int counter = 1;
    std::cin >> symbol;
    char prevSymbol = symbol;

    while(counter < 5){
        std::cin >> symbol;
        if(symbol == prevSymbol){
            switch (++counter)
            {
                case 2:
                    std::cout << "No please don't do it!\n";
                    break;
                case 3:
                    std::cout << "Don't do this to me!\n";
                    break;
                case 4:
                    std::cout << "This is your last chance!\n";
                    break;
                case 5:
                    for (size_t i = 0; i < 1000; i++)
                    {
                        std::cout << symbol;
                    }
                    break;
                default:
                    break;
            }
        }
        else{
            counter = 1;
            prevSymbol = symbol;
        }
    }
}