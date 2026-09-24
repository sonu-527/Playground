// Fractional Part of a number 
#include<stdio.h>
int main(){
    float x;
    printf("Enter a decimal number= ");
    scanf("%f", &x);
    int y = x;
    double z = x-y;
    printf("Fractional part= %f\n", z);
    return 0;
}