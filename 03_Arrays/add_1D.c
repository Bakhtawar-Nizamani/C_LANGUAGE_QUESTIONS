#include <stdio.h>
int main(void){
    //  Add two 1D arrays 

    int row1[5] = {3,16,39,45,21};
    int row2[5] = {5,14,26,67,81};
 
    
    for(int i = 0;i < 5;i++){
        int row_addition = row1[i] + row2[i];
        printf("%d ",row_addition);
    }

    return 0;
}