#include <stdio.h>

float a,b,c,d,e;

int main(){
    a = 1.0e+30;
    b = 9.0e+38; // > 3.0e+38 => INF
    c = a * b;
    d = a / b;  // Divide by INF
    e = 1.1e-9 + d;

    printf("c value is: %e\n",c);
    printf("d value is: %e\n",d);
    printf("e value is: %e\n",e);
}