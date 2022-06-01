#include <stdio.h>
typedef struct{
    char name[10];
    int age;
} Person;

int main(){
    Person p1;
    scanf("%s %d", p1.name, &p1.age);
    printf("name: %s\nage: %d", p1.name, p1.age);
}