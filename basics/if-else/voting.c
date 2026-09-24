// Eligible for Vote or not
#include <stdio.h>
int main(){
    int x;
    printf("enter your age:");
    scanf("%d", &x);
    if(x<18){
        printf(" you are not eligible");
    }
    else{
        printf("please vote");
    }
    return 0;
}