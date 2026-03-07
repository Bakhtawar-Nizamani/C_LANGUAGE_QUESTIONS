#include <stdio.h>
int main(void){
    // Print numbers from 1 to N

    int n;
    printf("How many digits you want to print from 1 to: ");
    scanf("%d",&n);

    for(int i = 1;i <= n;i++){
        printf("%d\n",i);
    }
    return 0;
}