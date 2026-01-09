#include<stdio.h>
int main(){
    int a , factorial = 1;
    printf("Enter the value of a\n");
    scanf("%d" , &a);

    if( a == 0 || a == 1){
        printf("Factorial is 1\n");
        return 0;
    }

    while(a >= 2){
        factorial = factorial * a ;
        a--;
    }
        printf("The factorial is %d\n" , factorial);
return 0;
}
