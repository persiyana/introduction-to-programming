#include <iostream>

int main() {
    int n, k;
    std::cin >> n;
    int *arr = new int[n];
    int *finalArr = new int[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cin >> k;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == k)
        {
            finalArr[index] = arr[i];
            index++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != k)
        {
            finalArr[index] = arr[i];
            index++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << finalArr[i] << " ";
    }
}