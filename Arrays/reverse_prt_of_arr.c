// Reversing the Entered Array
#include <stdio.h>
int  main(){
    int n;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    int arr[n] ,i;
    for (i=0;i<n;i++){
        printf("Enter a number of %d: " , i+1);
        scanf("%d", &arr[i]);
    }
    for(i=n-1;i>=0;i--)
        printf("%d ", arr[i]);
    return 0;
}