#include <stdio.h>

int main(){
    double a,b,c,d,e;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    double arr[5] = {a,b,c,d,e};
    double *parr = arr;
    double sum = 0;
    for(int i = 0; i< 5; i++){
        *(parr+i) = *(parr+i)*2;
        sum += *(parr+i);
        printf("%lf\n", *(parr+i));
    }
    printf("sum: %lf", sum);
}