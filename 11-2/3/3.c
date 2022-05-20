#include <stdio.h>

int main(){
    char str[10];
    scanf("%s",str);
    int cnt[10];
    char c[10];
    int n = 0;
    int flag = 0;
    for(int i=0;i<strlen(str);++i){
        for(int j=0;j<n;++j){
            if(c[j]==str[i]){
                cnt[j]++;
                flag = 1;
                break;
            }
        }
        if(flag==0){
            c[n] = str[i];
            cnt[n] = 1;
            n++;
        }
        flag = 0;
    }
    for(int i=0;i<n;++i){
        printf("\'%c\': %d\n",c[i],cnt[i]);
    }
    return 0;
}