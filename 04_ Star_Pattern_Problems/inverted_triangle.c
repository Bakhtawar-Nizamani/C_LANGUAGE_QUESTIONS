#include <stdio.h>
int main(void){
    // Print inverted triangle

    /*
   **** 
   *** 
   ** 
   * 
      */
    
    for(int i = 4; i >= 1;i--){
        for(int j=i;j >= 1;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}