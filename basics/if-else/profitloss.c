// whether it's Profit Or Loss
#include <stdio.h>
int main(){
    int sp,cp;
    printf("Enter your selling price: ");
    scanf("%d", &sp);
    printf("Enter your cost price: ");
    scanf("%d", &cp);
    if(sp>cp){
        printf("Yeahh! you made a profit of:%d", sp-cp);
    }
    if(sp==cp){
        printf("Ohh! you made a nothing");
    }
    else{
        printf("Opps! you loss by:%d",cp-sp);
    }
    return 0;
}