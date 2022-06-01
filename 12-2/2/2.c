#include <stdio.h>
typedef struct {
    char name[7];
    int score;
} Person;

void printScoreStars(Person* persons, int len){
    for(int i = 0; i < len; i++){
        printf("%s",(persons+i)->name);
        int spacenum = 7 - strlen((persons+i)->name);
        for(int k = 0; k < spacenum; k++){
            printf(" ");
        }
        int sc = (persons+i)->score;
        for(int j = 0; j < sc/5; j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    Person persons[3];
    for(int i = 0; i < 3; i++){
        scanf("%s %d", persons[i].name, &persons[i].score);
    }
    printScoreStars(persons, 3);
}