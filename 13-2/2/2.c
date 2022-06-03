#include <stdio.h>
#include <string.h>

int main(){
    char words[10][20];
    char word[20] = "";
    char searchword[20] = "";
    int i = 0;
    while(strcmp(word, "end")!=0){
        printf("Enter a word (Enter 'end' to quit): ");
        scanf("%s", word);
        int nonexist = 0;
        for(int j = 0; j < i; j++){
            if(strcmp(word, words[j])==0){
                printf("This word already exists. Please enter another word.");
                nonexist = 1;
                break;
            }
        }
        if(nonexist == 1){
            continue;
        }
        if(strcmp(word, "end")!=0){
            strcpy(words[i], word);
            i++;
        }        
    }
    printf("%d words in the list:\n", i);
    for(int k = 0; k < i; k++){
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
        for(int z = 0; z < i; z++){
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