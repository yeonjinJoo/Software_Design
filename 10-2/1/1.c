#include <stdio.h>

int main(){
    int a,b,c,d,e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int arr[5] = {a,b,c,d,e};
    int min = arr[0], max = arr[0], sum = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
        sum += arr[i];
    }
    printf("min: %d\nmax: %d\nsun: %d", min, max, sum);


}