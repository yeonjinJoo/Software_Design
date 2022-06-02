#include <stdio.h>

void printString(const char* str){
    printf("%s\n", str);
}

int main(){
    const char* str[3] = {"One", "Two", "Three"};
    void (*fcnpoi)(const char*) = printString;
    for(int i = 0; i<3; i++){
        fcnpoi(str[i]);
    }
}