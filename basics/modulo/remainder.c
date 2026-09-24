// standard Remainder finder 
#include <stdio.h>
int main(){
    int x,y,z;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("enter a number: ");
    scanf("%d", &y);
    z = x % y;
    printf("remainder of %d / %d =%d", x,y,z);
    return 0;   
}