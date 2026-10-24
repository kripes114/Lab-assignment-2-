#include <stdio.h>

int main() {
    int n,fac = 1;

    printf("Enter a number : ");
    scanf("%d",&n);

    printf("%d! = ",n);

    if(n < 0){
        printf("Undefined");
    }
    else if( n == 0){
        printf("1");
    }
    else{
        for(int i = n;i > 0; i--){
            fac = fac * i;
            printf("%d ",i);
            if(i > 1){
                printf("* ");
            }
            
        }   
    
        printf("= %d",fac); 
    }
    return 0;
}