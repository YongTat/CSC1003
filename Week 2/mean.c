#include <stdio.h>

int main(){
    float sum = 0;
    int arr[] = {1,2,3,4,5};
    int size = sizeof arr / sizeof *arr;
    for(int i = 0; i < size; ++i){
        sum += arr[i];
    }
    printf("Mean: %f",sum/size);
    return 0;
}
