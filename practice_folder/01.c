// check +ve/-ve/ 0

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0) printf("Number a Negative.");
    else if (n>0) printf("Number a Positive.");
    else printf("Number is zero.");
    return 0;
}