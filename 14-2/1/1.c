#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int size = 10;
    char** words = (char**)malloc(size*sizeof(char*));
    for(int i = 0; i < 10; i++){
        words[i] = (char*)malloc(21*sizeof(char));
    }
    int realstrnum = 0;
    char word[21] = "";
    char searchword[21] = "";
    char**asdf;
    while(strcmp(word,"end")!=0){
        if(realstrnum == size){
            size = size + 10;
            char** words2 = (char**)malloc(size*sizeof(char*));
            for(int i = 0; i < size; i++){
                words2[i] = (char*)malloc(21*sizeof(char));
            }
            for(int q = 0; q < realstrnum; q++){
                words2[q] = words[q];
            }
            asdf=words;
            words = words2;
            free(asdf);
        }
        printf("Enter a word (Enter 'end' to quit): ");
        scanf("%s", word);
        int nonexist = 0;
        for(int j = 0; j < realstrnum; j++){
            if(strcmp(word, words[j])==0){
                printf("This word already exists. Please enter another word.\n");
                nonexist = 1;
                break;
            }
        }
        if(nonexist == 1){
            continue;
        }
        if(strcmp(word, "end")!=0){
            strcpy(words[realstrnum], word);
            realstrnum++;
        }
    }
    printf("%d words in the list:\n", realstrnum);
    for(int k = 0; k < realstrnum; k++){
        printf("%s ", words[k]);
    }
    while(strcmp(searchword, "end")!=0){
        printf("\n");
        printf("Enter a word to search (Enter 'end' to quit): ");
        scanf("%s", searchword);
        if(strcmp(searchword, "end")==0){
            break;
        }
        int nonexist = 0;
        for(int z = 0; z < realstrnum; z++){
            if(strcmp(searchword, words[z])==0){
                printf("This word is in the list.");
                nonexist = 1;
                break;
            }
        }
        if(nonexist == 0){
            printf("This word is NOT in the list.");
        }
    }
}