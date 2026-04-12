#include <stdio.h>
int main(void){
    // Find length of String using Pointers
    
    char name[35] = "Bakhtawar Nizamani";

    char *ptr = name;
    
    int count = 0;
    while(*ptr != '\0'){

        count++;

        ptr = ptr + 1;
    }
    
    printf("The length of given string is: %d",count);
   
    return 0;
}