#include <stdio.h>
int main(){
    double a,b,product;
    printf("Enter a number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);
    product = a*b;
    printf("Product of %.2lf and %.2lf is:%.2lf", a,b,product);
    return 0;
}