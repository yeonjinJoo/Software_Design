#include <stdio.h>

void getSumDiff(int a, int b, int* pSum, int *pDiff){
    *pSum = a + b;
    *pDiff = a - b;
}

int main(){
    int num1, num2, sum, diff;
    scanf("%d %d", &num1, &num2);
    getSumDiff(num1, num2, &sum, &diff);
    printf("sum: %d\ndiff: %d", sum, diff);
}