#include <stdio.h>

float m, c, x_zero, y_zero;

int main(){
    // Initial input
    printf("Enter m: ");
    scanf("%f",&m);
    printf("Enter c: ");
    scanf("%f",&c);
    printf("Enter X: ");
    scanf("%f",&x_zero);
    printf("Enter Y: ");
    scanf("%f",&y_zero);

    //math
    float perpendicular_m = -1 / m;
    float perpendicular_c = y_zero - (perpendicular_m * x_zero);
    float parallel_c = y_zero - (m * x_zero);

    // Output
    printf("Equation of orignal line y = %fx + %f\n",m,c);
    printf("Equation of parallel line y = %fx + %f\n",m,parallel_c);
    printf("Equation of perpendicular line y = %fx + %f",perpendicular_m, perpendicular_c);

    return 0;
}