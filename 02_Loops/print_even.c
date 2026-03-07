#include <stdio.h>
int main(void){
    // Print all even numbers between 1 to N

    int n;
    printf("How many even numbers you want to print between 1 to N: ");
    scanf("%d",&n);
   
    printf("Series of even numbers between 1 to %d",n);
    for(int i=1; i < n; i++){
        if(i % 2 == 0){
            printf("\n%d",i);
        }
    }
    return 0;
} 