#include <stdio.h>
int main(){
    char n;
    printf("Enter a number: ");
    scanf("%c", &n);
    for(int i=1;i<=5;i++)
         printf("%c\n", n);
    return 0;
}