#include <stdio.h>

int main(){
    char str[50];
    int key, val;

    printf("Input String: ");
    scanf("%s",&str);
    printf("input Key: ");
    scanf("%d",&key);

    int i = 0;
    while(str[i] != '\0'){
        printf("%s\n",str);
        if(str[i] != ' '){
            val = (int) str[i];
            val += key;
            str[i] = (char) val;
        }
        i += 1;
    }
    printf("%s",str);
    return 0;
}