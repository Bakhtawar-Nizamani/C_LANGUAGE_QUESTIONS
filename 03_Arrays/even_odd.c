#include <stdio.h>
#include <stdlib.h>
int main(void){
    // Count even and odd numbers in array 
    
    int size;
    printf("How many elements you want to enter an array? ");
    scanf("%d",&size);

    int number[size];
    for(int i = 0;i < size;i++){
        printf("%d) Enter number: ",i+1);
        scanf("%d",&number[i]);
    }

    int count_even = 0;
    int count_odd = 0;

    for(int i = 0;i < size;i++){
        if(number[i] % 2 == 0){
            count_even++;
        }else{
            count_odd++;
        }
    }
    system("cls");  // clear screen
    printf("\n\nThere are %d even numbers in array",count_even);
    printf("\nThere are %d odd numbers in array",count_odd);
    
    return 0;
}