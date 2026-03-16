#include <stdio.h>
int main(void){
    //  Add two 2D arrays 
    
    int matrix1[2][3] = {
        {12,8,9},
        {5,29,30}
    };
   
    int matrix2[2][3] = {
        {8,11,24},
        {30,25,3}
    };
    
    // Print Matrix 1
    printf("\n\n\tMatrix1\n");
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 3;j++){
           printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }

    // Print Matrix 2
    printf("\n\n\tMatrix2\n");
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 3;j++){
           printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
   

    // Matrix Addition
    printf("\tMatrix Addition\n");
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 3;j++){
            int matrix_addition = matrix1[i][j] + matrix2[i][j];
            printf("%d ",matrix_addition);
        }
        printf("\n");
    }

    
    return 0;
}