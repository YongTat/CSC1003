#include <stdio.h>
#define PI 3.141592654

int main();

int main(){
    float radius, height, volume, surface_area;

    // print heading
    printf("\n cylinder.c");
    printf("\n computes volume and surafce area of a cylinder.");

    // read in radius and height
    printf("\n\n Enter radius of cylinder: ");
    scanf("%f", &radius);
    printf("Enter height of cylinder: ");
    scanf("%f", &height);

    // computes
    volume = PI * radius * height;
    surface_area = 2 * PI * radius * (radius+height);

    //print results
    printf("\n Volume of cylinder is %10.4f", volume);
    printf("\n surface area of cylinder is %10.4f\n\n", surface_area);

}