#include <stdio.h>

int main(){
    float x1, x2, y1, y2, m, c, x, y;

    printf("\nLinear Interpolation\n");
    //get x1,y1,x2,y2
    printf("\nEnter x1: ");
    scanf("%f", &x1);
    printf("\nEnter y1: ");
    scanf("%f", &y1);
    printf("\nEnter x2: ");
    scanf("%f", &x2);
    printf("\nEnter y2: ");
    scanf("%f", &y2);
    printf("\nEnter X point to be found: ");
    scanf("%f", &x);


    //find m
    m = (y2-y1) / (x2-x1);
    c = y1 - (m*x1);
    y = m*x + c;

    //print calculations
    printf("\nSlope: %f", m);
    printf("\nY intercept: %f", c);
    printf("\nY at point %f = %f",x,y);
}