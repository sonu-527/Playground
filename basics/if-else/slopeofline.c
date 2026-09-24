// Find the slope of Line
#include <stdio.h>
int main(){
    double x1,y1,x2,y2,x3,y3,m1,m2;
    printf("enter x1 and y1: ");
    scanf("%lf %lf", &x1,&y1);
    printf("enter x2 and y2: ");
    scanf("%lf %lf", &x2,&y2);
    printf("enter x3 and y3: ");
    scanf("%lf %lf", &x3,&y3);
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if(m1==m2)
       printf("straight line");
    else 
    printf("not a straight line");
    return 0;
}