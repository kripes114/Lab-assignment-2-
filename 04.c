#include <stdio.h>

int main() {
    int n,sum=0,i=2;

    printf("Enter any number : ");
    scanf("%d",&n);

    for(int j = n;j > 0;j--){
            if(j%i==0){
                sum += j;
            } 
    }
    printf("The sum of all even numbers from 1 to %d is : %d",n,sum);
    return 0;
}