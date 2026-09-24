// Subjects Percentage finder
#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter subject maths numbers out of hundred= ");
    scanf("%d", &a); 
    printf("enter subject physics numbers out of hundred= ");
    scanf("%d", &b);
    printf("enter subject chemistry numbers out of hundred= ");
    scanf("%d", &c);
    float d = a+b+c;
    printf("here is your percentage=%f", d/3);
    return 0;
}                       