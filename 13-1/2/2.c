#include <stdio.h>

int main(){
    int n1,n2,n3,n4,n5,n6;
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
    int arr[3][2] = {{n1,n2}, {n3,n4}, {n5,n6}};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}