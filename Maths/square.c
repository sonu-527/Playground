#include <stdio.h>
int main(){
   float x,y;
   int z;
   x = 2;
   y = 3.14;
   printf("enter a radius= ");
   scanf("enter a radius=%d", &z);
   printf("perimeter of circle = %f", x*y*z);
   return 0;
}