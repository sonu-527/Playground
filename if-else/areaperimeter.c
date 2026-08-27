#include <stdio.h>
int main(){
    int l,b;
    printf("Enter length of rectangle: ");
    scanf("%d", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &b);
    int area = l*b;
    int perimeter = 2*(l+b);
    if(area > perimeter){
        printf("Area won the match...");
    }
    else if(area==perimeter){
        printf("waits guys its a tie...");
    }
    else{
        printf("Perimeter won...");
    }
    return 0;
}
