#include <stdio.h>

int main() {
    int n,sum=0;

    printf("Enter a number : ");
    scanf("%d",&n);

    for(;n != 0; n = n / 10){
        if( n < 0){
            n = -n;
        }
        sum = (n % 10) + sum;
    }
    printf("Sum of the digits is : %d",sum);

    return 0;
}