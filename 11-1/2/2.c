#include <stdio.h>
#include <ctype.h>

int main(){
    char str[10];
    scanf("%s", str);
    int i = 0;
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(str[i]!='\0'){
        for(int j = 0; j < strlen(lowercase); j++){
            if(str[i] == lowercase[j]){
                str[i] = toupper(str[i]);
            }
            else if(str[i]==uppercase[j]){
                str[i] = tolower(str[i]);
            }
        }
        i++;
    }
    printf("%s\n", str);
}