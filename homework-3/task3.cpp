#include <iostream>
#include <limits>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n; j++) {
            if(arr[i] > arr[j]) 
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}

int main() {
    int n, k;
    std::cin >> n;
    int *arr = new int[n];
    int maxDifference = std::numeric_limits<int>::min();

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    bubbleSort(arr, n);

    for (int i = 1; i < n; i++)
    {
        int currentDifference = arr[i] - arr[i-1];
        if(currentDifference > maxDifference) {
            maxDifference = currentDifference;
        }
    }
    
    std::cout << maxDifference;
}