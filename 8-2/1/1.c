#include <stdio.h>

int main(){
    double A = 1.23456789, B = 0.0000123456789;
    printf("1) %.10f %.10f\n", A, B);
    printf("2) %e %e\n", A, B);
    printf("3) %E %E\n", A, B);
    printf("4) %g %g\n", A, B);
    printf("5) %G %G\n", A, B);
}