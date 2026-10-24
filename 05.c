#include <stdio.h>

int main() {
    int n,multi;

    printf("Enter any number : ");
    scanf("%d",&n);

    printf("The multiplication table of %d is : \n",n);

    for(int i=1; i<11; i++){
        multi = n*i;
        printf("%d * %d =%d\n",n,i,multi);
    }
    
    return 0;
}