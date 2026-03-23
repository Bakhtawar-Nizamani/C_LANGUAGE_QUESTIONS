#include <stdio.h>
int main(void){
    // Print pyramid pattern 
    /*
     * 
    *** 
   ***** 
    */
    
    int n = 3;
    for(int i = 1; i <= n; i++){  // outer loop
      // Space
      for(int j = 1; j <= n - i; j++){
        printf(" ");
      }
      // Star
      for (int j = 1; j <= i; j++)
      {
       printf("*");
      }
      // Star
      for (int j = 1; j <= i - 1; j++)
      {
       printf("*");
      }
      
      // New line
      printf("\n");

    }
    
    return 0;
}