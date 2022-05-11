#include <stdio.h>
int add(int a, int b){
        return a+b;
    }
    int sub(int a, int b){
        return a-b;
    }
    int mul(int a, int b){
        return a*b;
    }
    double div(int a, int b){
        return (double)a / b;
    }
    int mod(int a, int b){
        return a%b;
    }
    void printMsg(int a, int b){
        printf("sum: %d\ndifference: %d\nproduct: %d\ndivision: %f\nremainder: %d\ncompleted", add(a,b), sub(a,b),mul(a,b), div(a,b), mod(a,b));
    }
int main(){
    int A,B;
    scanf("%d\n%d", &A,&B);
    printMsg(A,B);
}