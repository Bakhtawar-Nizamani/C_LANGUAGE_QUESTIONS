#include <stdio.h>
int main()
{
  // Positive, Negative, or Zero

  int number;
  printf("Enter integer number: ");
  scanf("%d",&number);

  if(number > 0){
    printf("Entered number is positive");
  }else if (number < 0){
    printf("Entered number is negative");
  }else{
    printf("Entered number is zero");
  }


  return 0;
}
