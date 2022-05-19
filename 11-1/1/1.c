#include <stdio.h>

int main(){
    char str1[20], str2[10];
    scanf("%s %s", str1, str2);
    printf("str1: %s\nstr2: %s\n",str1, str2);
    printf("length of str1: %d\nlength of str2: %d\n", strlen(str1), strlen(str2));
    int compare = strcmp(str1, str2);
    printf("str+str2: %s\n", strncat(str1, str2, strlen(str2)));
    if(compare==0)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }
}