// Prime using loop
#include <stdio.h>
int main(){
    int n;
    int isprime = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i=2;i<n;i++){
        if (n % i==0){
            isprime = 0;
            break;
        }
    }
    if (isprime)
      printf("prime");
    else 
    printf("not a prime");
    return 0;
}             