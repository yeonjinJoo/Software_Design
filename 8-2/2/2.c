#include <stdio.h>

int main(){
    while(1){
        char c;
        scanf(" %c", &c);
        int result;
        if(c>=97 && c <= 122){
          result = c - 32;
          printf("-> %c\n", result);
        }
        else if( c >= 65 && c <= 90){
          result = c + 32;
          printf("-> %c\n", result);
        }
        else if(c >= 48 && c <= 57){
            result = c - 48;
            printf("-> %d\n", result);
        }
        else{
            printf("exit");
            break;
        }
          
    }
    return 0;

}