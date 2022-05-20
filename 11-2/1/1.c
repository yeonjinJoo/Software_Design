#include <stdio.h>

int main(){
    char str[10];
    scanf("%s", str);
    int tr = 0;
    for(int i = 0; i < strlen(str)/2; i++){
        if(str[i] != str[strlen(str)-i-1]){
            tr = 1;
            printf("This is not a palindrome");
            break;
        }
    }
    if(tr==0){
        printf("This is a palindrome");
    }
}