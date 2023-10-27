#include <iostream>
using namespace std;
int lengthStr(char s[255])
{
    int count = 0;
    while(s[count] > 0) 
    {
        count++;
    }
    return count;
}

void reverse(char tempStr[255]){
    int length = lengthStr(tempStr);
    for (int i = 0; i < length/2; i++)
    {
        char temp = tempStr[i];
        tempStr[i] = tempStr[length-i-1];
        tempStr[length-i-1] = temp;
    }
}

void concatTwo(char str[255], char tempStr[255]){
    int tLength = lengthStr(tempStr);
    int strLength = lengthStr(str);
    if(strLength == 1) {
        strLength--;
    }
    int count=0;
    for(int i = strLength; i < strLength+ tLength; i++) {
        str[i]=tempStr[count];
        count++;
    }
}

void concat(int n){
    char str[255];
    while(n>0){
        char tempStr[255];
        std::cin >> tempStr;
        reverse(tempStr);
        concatTwo(str, tempStr);
        n--;
    }
    std::cout<<str;
}


int main(){
    int n;
    std::cin >> n;
    concat(n);
}