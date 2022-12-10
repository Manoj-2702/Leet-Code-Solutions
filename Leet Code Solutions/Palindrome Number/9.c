#include<stdio.h>

bool isPalindrome(int x){
    if(x<0)
    {
        return false;
    }
    unsigned long int reversed = 0;
    int y=x;
    while(y)
    {
        reversed = reversed *10 + y % 10;
        y=y/10;
    }
    return reversed == x;
}
