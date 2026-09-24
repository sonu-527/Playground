// char print to n times
#include <stdio.h>
int main(){
    char c;
    int x;
    printf("Enter a char: ");
    scanf("%c", &c);
    printf("Enter number of times char to be printed: ");
    scanf(" %d", &x);
    for(int i=1;i<=x;i++)
         printf(" %c ",c);
    return 0;
}