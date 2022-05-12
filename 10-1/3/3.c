#include <stdio.h>

int main(){
    char str[100];
    scanf("%s", str);
    int num = 0;
    for(int i = 0; i < sizeof(str)/sizeof(char); i++){
        if(str[i]=='\0'){
            break;
        }
        num++;
    }
    printf("%d", num);
}