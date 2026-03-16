#include <stdio.h>
int main(void){
    // Find sum of each row and column of matrix 

    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row1_sum,row2_sum ,row3_sum;
    row1_sum = 0;
    row2_sum = 0;
    row3_sum = 0;
  
    int col1_sum,col2_sum,col3_sum;
    col1_sum = 0;
    col2_sum = 0;
    col3_sum = 0;

    // Row1 sum 
    for(int i = 0;i < 1;i++){
        for(int j = 0;j < 3;j++){
            row1_sum += matrix[i][j];
        }
    }

    // Row2 sum
    for(int i = 1;i < 2;i++){
        for(int j = 0;j < 3;j++){
            row2_sum += matrix[i][j];
        }
    }

    // Row3 sum
    for(int i = 2;i < 3;i++){
        for(int j = 0;j < 3;j++){
            row3_sum += matrix[i][j];
        }
    }

    // Column1 sum 
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 1;j++){
           col1_sum += matrix[i][j];
        }
    }

    // Column2 sum
    for(int i = 0;i < 3;i++){
        for(int j = 1;j < 2;j++){
            col2_sum += matrix[i][j];
        }
    }

    // Column3 sum
    for(int i = 0;i < 3;i++){
        for(int j = 2;j < 3;j++){
           col3_sum += matrix[i][j];
        }
    }

    // Rows Sum
    printf("\nRow1 sum = %d",row1_sum);    
    printf("\nRow2 sum = %d",row2_sum);    
    printf("\nRow3 sum = %d",row3_sum);    


    // Columns Sum
    printf("\n\nCols1 sum = %d",col1_sum);    
    printf("\nCol2 sum = %d",col2_sum);    
    printf("\nCol3 sum = %d",col3_sum);   
  

    return 0;
}