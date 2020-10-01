#include <stdio.h>
#include <math.h>

int factorial(int number){
    if(number < 1){
        return 1;
    } 
    else{
        return number * factorial(number - 1);
    }
}

int seriesexpansion(int x, int y, int n){
    int sum = 0, val = 0, k = 0, halfpoint;
    halfpoint = (n/2) + 1;
    for(int i = n; i >= halfpoint; --i){
        k = n - i;
        val = factorial(n) / (factorial(k) * factorial(n-k));
        sum += (val * pow(x,n)) + (val * pow(y,n));
    }
    // for even only
    if(n%2 == 0){
        val = factorial(n) / (factorial(n/2) * factorial(n/2));
        sum += val * pow(x,n/2) * pow(y,n/2);
    }
    return sum;
}

int main(){
    int x,y,n;
    // Collect input
    printf("Enter x value: ");
    scanf("%d",&x);
    printf("Enter y value: ");
    scanf("%d",&y);
    printf("Enter n value: ");
    scanf("%d",&n);

    // Function Call
    int result = seriesexpansion(x,y,n);
    printf("%d",result);
    return 0;
}