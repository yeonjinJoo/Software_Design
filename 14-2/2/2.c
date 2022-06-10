#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[7];
    int score;
} Person;

void printScoreStars(Person* persons, int len){
    for(int i = 0; i < len; i++){
        printf("%s", persons[i].name);
        int spacenum = 7 - strlen(persons[i].name);
        for(int j = 0; j < spacenum; j++){
            printf(" ");
        }
        for(int k = 0; k < persons[i].score/5; k++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int size = 10;
    Person* persons = (Person*)malloc(size*sizeof(Person));
    int index = 0;
    Person* cc;
    char changeName[7];
    int changeScore;
    while(1){
        if(index == size){
            size = size + 10;
            Person* persons2 = (Person*)malloc(size*sizeof(Person));
            for(int i = 0; i < index; i++){
                strcpy(persons2[i].name, persons[i].name);
                persons2[i].score = persons[i].score;
            }
            cc = persons;
            persons = persons2;
            free(cc);
        }
        scanf("%s %d", changeName, &changeScore);
        if(strcmp(changeName, "END")==0 && changeScore==0){
            break;
        }
        strcpy(persons[index].name, changeName);
        persons[index].score = changeScore;
        index++;
    }
    printScoreStars(persons, index);
}