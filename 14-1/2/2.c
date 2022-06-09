#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,min,max;
    scanf("%d", &num);
    int* pi = (int*)malloc(sizeof(int)*num);
    for(int i = 0; i < num; i++){
        scanf("%d", &pi[i]);
    }
    min = pi[0];
    max = pi[0];
    for(int i = 1; i < num; i++){
        if(pi[i] < min){
            min = pi[i];
        }
        else if(pi[i] > max){
            max = pi[i];
        }
    }
    printf("min: %d\nmax: %d", min, max);
}