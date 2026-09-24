// Multiplication of table

#include <stdio.h>
int main(){
    int n,i,j;
    printf("Enter a Number you want to write a table for: ");
    scanf("%d", &n);
    for (i=1;i<=10;i++){
        j = i*n;
        printf("%d X %d = %d\n",n,i,j);
    }
 return 0;
}