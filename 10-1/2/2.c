#include <stdio.h>

int main(){
    int i; 
    double d;
    char c;
    scanf("%d %lf %c", &i, &d, &c);
    printf("i: %d, %p\n", i, &i);
    printf("d: %lf %p\n", d, &d);
    printf("c: %c, %p\n\n", c, &c);

    int *pi = &i;
    double *pd = &d;
    char *pc = &c;
    (*pi)++; 
    (*pd)++; 
    (*pc)++;
    printf("i+1: %d\n", i);
    printf("d+1: %lf\n", d);
    printf("c+1: %c\n\n", c);

    printf("size of pi: %lu\n", sizeof(pi));
    printf("size of pd: %lu\n", sizeof(pd));
    printf("size of pc: %lu\n", sizeof(pc));



}