#include <stdio.h>

int main(){
    char str[50];
    int key, val;

    // Get inputs
    printf("Input String: ");
    scanf("%s",&str);
    printf("input Key: ");
    scanf("%d",&key);

    // loop over str
    int i = 0;
    while(str[i] != '\0'){
        printf("%s\n",str);
        if(str[i] != ' '){
            val = (int) str[i];
            val += key;
            if(val > 122){
                val -= 26;
            }
            else if (val > 90 && val < 122){
                val -= 26;
            }
            str[i] = (char) val;
        }
        i += 1;
    }

    //output
    printf("%s",str);
    return 0;
}