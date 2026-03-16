#include <stdio.h>
int main(void){
    // Find transpose of matrix 
    
    // 3 x 3 -> matrix

    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    // Transpose 
    // row -> column
    // column -> row

    int transpose_matrix[3][3];
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            transpose_matrix[i][j] = matrix[j][i];
        }
    }
    
    // Print transpose matrix
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            printf("%d ",transpose_matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}