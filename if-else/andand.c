#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter a number:");
    scanf("%d", &a);
    printf("enter a number:");
    scanf("%d", &b);
    printf("enter a number:");
    scanf("%d", &c);
    printf("enter a number:");
    scanf("%d", &d);
    if (a>b && a>c && a>d){
        printf("%d is big:", a);
    }
    else if (b>c && b>d && b>a){
        printf("%d is big", b);
    }
    else if (c>a && c>b && c>d){
        printf("%d is big",c);
    }
    else if (d>a && d>b && d>c){ 
        printf("%d is big",d);
    }
    else{
        printf("it a wrong ");
    }
    return 0;
}