#include <iostream>

int main()
{
    int n, index, number;
    char command = ' ';
    std::cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    while (command != 'e')
    {
        std::cin >> command;
        if (command != 'e')
        {
            std::cin >> index >> number;
        }

        switch (command)
        {
        case '+':
            arr[index] += number;
            break;
        case '-':
            arr[index] -= number;
            break;
        case '*':
            arr[index] *= number;
            break;
        case '/':
            arr[index] /= number;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}