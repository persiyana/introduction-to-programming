#include <iostream>

void matrix(int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int current=0;
            if(i==j) current = i;
            else if(j>i) current = j-i;
            else current = i*j;
            std::cout << current << '\t';
        }
        std::cout << std::endl;
    }
    
}

int main(){
    int n, m;
    std::cin >> n >> m;
    matrix(n, m);
}