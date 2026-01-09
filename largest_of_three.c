#include<stdio.h>
int main(){
    int a , b , c;
    printf("Enter the value of a\n");
    scanf("%d" , &a);

    printf("Enter the value of b\n");
    scanf("%d" , &b);

    printf("Enter the value of c\n");
    scanf("%d" , &c);

    if ( a >= b && a >=c )
        printf("a is the largest number\n");
    else if( b >= a && b >= c)
        printf("b is the largest number\n");
    else
    printf("c is the largest\n");
    

return 0;
}
