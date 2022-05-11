#include <stdio.h>
int n;
int gMul = 1;
int addTotal(void){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}
void mulTotal(void){
    for(int i = 1; i <= n; i++){
        gMul *= i;
    }
}
int main(){
    scanf("%d", &n);
    mulTotal();
    printf("addTotal(): %d\ngMul: %d", addTotal(), gMul);

}