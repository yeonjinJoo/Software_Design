#include <stdio.h>

int main(){
    int a,b,c,d,e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int arr[5] = {a,b,c,d,e};
    for(int i = 0; i < 3; i++){
       int* pi = arr+i;
       int j = (*pi);
       int* pii = arr+5-i-1;
       (*pi) = *(arr+5-i-1);
       (*pii) = j;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", *(arr+i));
    }
    
}