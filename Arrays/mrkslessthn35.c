// Printing Of Roll No. Where marks is less than 35
#include <stdio.h>
int  main(){
    int marks[10] ,i;
    for (i=0;i<10;i++){
        printf("Enter marks of std  %d\n " , i+1);
        scanf("%d", &marks[i]);
    }
    for(i=0;i<10;i++){
        if(marks[i]<35)
        printf("Roll of std who have less than 35 mrks:%d\n", i+1);
        else continue;
    }
    return 0;
}