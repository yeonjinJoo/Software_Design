#include <stdio.h>
int addtotal(int n){
    if(n==0){
        return 0;
    }
    else{
        return n + addtotal(n-1);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", addtotal(n));

}