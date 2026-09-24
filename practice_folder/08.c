// find numbers of divisible no. of given number.
#include <stdio.h>
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Number that can divide %d= ",n);
    for(i=1;i<n;i++){
        if(n%i==0)
             printf("%d, ",i);
        else continue;
    }
    printf("%d",n);
    return 0;
}