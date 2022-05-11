#include <stdio.h>
int combination(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return a*combination(a-1, b-1) /b;
    }
}
int main(){
    int N,R;
    scanf("%d %d", &N, &R);
    printf("%d", combination(N,R));

}