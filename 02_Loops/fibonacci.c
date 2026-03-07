#include <stdio.h>
int main(void){
    // Print Fibonacci Series (0,1,1,2,3,5,8,13,21,...)
    
    int n;
    printf("Enter how many terms you want: ");
    scanf("%d",number);
    
    int first_num = 0;
    int second_num = 1;
    fibonacci_seq = 0;

    int i = 1;
    while(i <= n )
    {
       printf("%d,",fibonacci_seq);
       fibonacci_seq = first_num + second_num;
       first_num = second_num;
       second_num = fibonacci_seq;
       i++;
    }
    

    return 0;
}