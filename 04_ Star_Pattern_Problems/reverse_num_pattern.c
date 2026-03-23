#include <stdio.h>
int main(void){
    // Print reverse number pattern
    /*
    1 2 3 4
    1 2 3
    1 2
    1
    */
    
    int n = 4;
    for(int i = n; i >= 1; i--){
        int num = 1;
        for(int j = i; j >= 1; j--){
            printf("%d ",num);
            num++;
        }
       
        printf("\n");
    }
    return 0;
}