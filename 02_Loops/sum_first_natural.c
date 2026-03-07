#include <stdio.h>
int main(void){
    // Print sum of first N natural numbers
    // Natural Numbers -> 1,2,3,4,5,.....,n
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("The sum of first %d natural numbers is = %d",n,sum);
    return 0;
}