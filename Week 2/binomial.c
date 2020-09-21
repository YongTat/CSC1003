#include <stdio.h>

int factorial(int number){
    int result = number;
    for(int i = number-1; i > 0; --i){
        result *= i;
    }
    return result;
}

int main (){
    int power = 4;
    int nfactorial = factorial(power);
    int b = 0, a = 0;
    int bfactorial;

    printf("X^%d + ",power);

    for(int i = 1; i < power; ++i){
        b = power - i;
        bfactorial = factorial(i);
        a = nfactorial / (bfactorial * factorial(power - i));
        printf("%d X^%d Y^%d + ",a,b,i);
    }

    printf("Y^%d",power);

    return 0;
}