#include <stdio.h>
int main(void){
    // Print number pattern
    /*
    1 
    1 2 
    1 2 3 
    1 2 3 4
    */

    int n = 4;
    
    for(int i = 1; i <= n; i++){
        int num = 1;
        for(int j = 1; j <= i; j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}