#include <iostream>

int main () {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || j==0 || i==n-1 || j==n-1)
            {
                std::cout << n;
            }
            else
            {
                std::cout << ' ';
                if(n > 9)
                {
                    std::cout << ' ';
                }
            }
        }
        std::cout << "\n";
    }
}