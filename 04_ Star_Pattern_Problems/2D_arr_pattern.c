#include <stdio.h>
int main(void){
    // Print pattern using 2D array 
    /*
    12345
    12345
    12345
    12345
    12345
    */

    int arr[5][5];

    for(int i = 0; i < 5; i++){ 
        int num = 1;
        for(int j = 0; j < 5; j++){  
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}