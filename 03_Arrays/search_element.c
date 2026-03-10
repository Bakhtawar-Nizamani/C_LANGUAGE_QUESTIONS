#include <stdio.h>
int main(void){
    // Search an element (linear search) 

    int arr[10];
    int index, num, found;

    for(int i = 0; i < 10; i++){
        printf("Enter number %d: ",i);
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the value you search for: ");
    scanf("%d",&num);

    for(int i = 0; i < 10; i++){
        if(num == arr[i]){
            found = 1;
            index = i;
            break;
        }
    }

    if(found == 1){
       printf("\nThe number is in position: %d",index);
    }else{
      printf("\nThe number is not in list");
    }

    
    return 0;
}