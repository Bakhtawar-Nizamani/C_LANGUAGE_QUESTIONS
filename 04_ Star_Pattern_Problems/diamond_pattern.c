#include <stdio.h>
int main(void){
    // Print Diamond Pattern
    /*
   *
  ***
 *****
*******
 *****
  ***
   * 
*/
    int n = 4;
    for(int i = 1; i <= n; i++){
        // Spaces 
        for (int j = 1; j <= n - i; j++){
            printf(" ");
        }

        // Star
        for(int j = 1; j <= 2*i - 1; j++){
            printf("*");
        }
        printf("\n");  // New line
    }

    for(int i = n - 1; i >= 1; i--){
        // Space 
        for(int j = n - i ; j >= 1; j--){
            printf(" ");
        }
        
        // Star 
        for(int j = 2*i - 1; j >= 1; j--){
            printf("*");
        }

        printf("\n"); // New line

    }
    return 0;
}
