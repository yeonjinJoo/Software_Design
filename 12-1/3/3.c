#include <stdio.h>
typedef struct{
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(Point p){
    Point newPoint;
    newPoint.xpos = p.xpos * 2;
    newPoint.ypos = p.ypos * 2;
    return newPoint;
}

int main(){
    Point p1, p2;
    scanf("%d %d", &p1.xpos, &p1.ypos);
    p2 = getScale2xPoint(p1);
    printf("%d %d", p2.xpos, p2.ypos);
}