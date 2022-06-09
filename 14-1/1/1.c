#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int xpos;
    int ypos;
} Point;

int main(){
    Point* pp = (Point*)malloc(sizeof(Point));
    scanf("%d %d", &(*pp).xpos, &(*pp).ypos);
    printf("%d %d", pp->xpos, pp->ypos);
    free(pp);
}