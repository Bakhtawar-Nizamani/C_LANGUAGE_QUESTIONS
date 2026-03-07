#include <stdio.h>
int main(void){
    // Print multiplication table of a number

    int number;
    printf("Please enter numbre for multiplication table: ");
    scanf("%d",&number);

    for(int i = 1; i <= 10;i++){
        printf("%d x %d = %d\n",i,number,number * i);
    }

    return 0;
}