// Prime or not
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool isprime = true;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i=2;i<n;i++){
        if (n % i==0){
            isprime = false;
            break;
        }
    }
    if (isprime)
      printf("prime");
    else 
    printf("not a prime");
    return 0;
}             