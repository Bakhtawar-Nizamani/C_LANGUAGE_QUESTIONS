#include <stdio.h>
int main(void){
    // Print checkboard pattern
    
    int n = 5;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((i + j) % 2 == 0){   // even numbered rectangle
                printf("\xDB");    // print filled rectangle
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}