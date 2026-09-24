// Check Whether a Number is Prime 
#include <stdio.h>
int main(){
    int n,i,isprime=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for (i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            
        }
        else continue;
        
    }
    if(isprime)
     printf("%d is a prime number.,",n);
    else {
    
        printf("%d is not a prime number.",n);
    return 0;
}