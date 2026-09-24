// Tell about Grade using Percentage
#include <stdio.h>
int main(){
    int a;
    printf("Enter your percentage:");
    scanf("%d", &a);
    if(a<100 && a>91)
       printf("very good,Grade:A");
    else if(a<90 && a>81)
       printf("good,Grade:A");
    else if(a<80 && a>71)
       printf("can do better,Grade:B");
    else if(a<70 && a>61)
       printf("average,Grade:B");
    else if(a<60 && a>51)
       printf("below average,Grade:C");
    else if(a<50 && a>41)
       printf("last chance,Grade:C");
    else if(a<40)
       printf("fail,Grade:D");
    else
       printf("enter correct value");
    return 0;

}