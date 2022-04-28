#include <stdio.h>

int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int min, max;
    if( n1 <= n2 && n1 <= n3){
        min = n1;
    }
    else if ( n2 <= n1 && n2 <= n3){
        min = n2;
    }
    else{
        min = n3;
    }

    if(n1 >= n2 && n1 >= n3){
        max = n1;
    }
    else if( n2 >= n1 && n2 >= n3){
        max = n2;
    }
    else{
        max = n3;
    }
    printf("min: %d \nmax: %d", min, max);
}