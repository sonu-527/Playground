// Check Whether a Number is Prime. 
// With list of number that can divide that non prime number.
#include <stdio.h>
int main(){
    int n,i,isprime=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<=1) 
    isprime=0;
    else{
        for (i=2;i<n;i++){
            if(n%i==0){
                isprime=0;
            break;} 
        }
    }
    if(isprime)
     printf("%d is a prime number.",n);
    else {
        printf("%d is not a prime number.\n",n);
        printf("List of divisors of %d is: ");
        for (i=1;i<n;i++){
           if(n%i==0)
           printf("%d, ",i);}
        printf("%d", n);
    }
    
    return 0;
}