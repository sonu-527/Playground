// Find Odd number using Continue statement.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i=1;i<2;i++){ // entered 1-2 bcs loop should run only one times
         if(n%2==0){
            printf("%d is not an odd number.",n);
            continue;}
         else printf("%d is odd number.",n);
    }
    return 0;
}