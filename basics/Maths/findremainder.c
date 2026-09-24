// Remainder finder
#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter number to be divided: ");
    scanf("%d", &a);
    printf("enter the number that wil divide:");
    scanf("%d", &b);
    c = a/b;
    d = a-(b*c);
    printf("remainder:%d", d);
    return 0;
}