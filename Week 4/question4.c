#include <stdio.h>

int main(){
    int x1,x2,y;

    printf("Enter X1: ");
    scanf("%d",&x1);
    printf("Enter X1: ");
    scanf("%d",&x2);

    // AND
    y = x1 && x2;

    printf("Y: %d",y);
    return 0;
}