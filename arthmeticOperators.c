#include <stdio.h>

int main() {
    // arithmetic operators = + - * / % ++ --
    int x = 5;
    int y = 10;
    int z;

    // z = x + y; == 15
    // z = x - y; == -5
    // z = x * y; == 50
    // z = x / y; == 0.500000
    z = x % y; // == 5
    
    printf("%d\n",z);

    // increments 
    x++;
    // x--;
    printf("%d\n",x);

    // augmented assignment operators
    x+=3; 
    // x-=3; 
    // x*=2;
    // x/=2;
    printf("%d\n",x);

    

    
    return 0;
}