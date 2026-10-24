#include <stdio.h>

int main() {
    int n,count=0;

    printf("Input a number : ");
    scanf("%d",&n);

    do{
        n = n/10;
        count++;
    }while(n != 0);

    printf("Digits = %d",count);

    return 0;
}