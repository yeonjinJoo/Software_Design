#include <stdio.h>

void swap(const char* arr[]){
    const char* new = arr[0];
    arr[0] = arr[1];
    arr[1] = new;
}

void printArray(const char* arr[]){
    printf("Array [0]:%s, [1]:%s,\n", arr[0], arr[1]);   
}

int main(){
    const char* str[2] = {"aaa", "bbb"};
    printArray(str);
    swap(str);
    printArray(str);
}