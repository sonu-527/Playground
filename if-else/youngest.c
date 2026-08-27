#include <stdio.h>
int main(){
    int r,s,a;
    printf("enter the age of ram:");
    scanf("%d", &r);
    printf("enter the age of shyam:");
    scanf("%d", &s);
    printf("enter the age of ajay:");
    scanf("%d", &a);
    if(r<s){
        if(r<a)
        printf("Ram is youngest");
        else
        printf("ajay is youngest");
    }
    else {
        if(s<a)
        printf("shyam is youngest");
        else 
        printf("ajay is youngest");
    }
}