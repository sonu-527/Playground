// Print 1-n Odd number using continue statement.
#include <stdio.h>
int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i%2==0)
            continue;
        else printf("%d, ",i);
         
    }
    return 0;
}