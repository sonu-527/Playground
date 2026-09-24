// sum of first N Natural number.
#include <stdio.h>
int main(){
    int n,i,j=0;
    printf("Enter a number:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        j+=i;
    }
    printf("Summation from 1 to %d is:%d",n,j);
    
    return 0;
}