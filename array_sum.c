#include<stdio.h>
int main(){
    int n , i ;
    int sum = 0;
    int arr[100];

    printf("Enter the value of n\n");
    scanf("%d" , &n);

     for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    
return 0;
}
