#include <stdio.h>
int main()
{
    // Even or Odd

    int number;
    printf("Enter an integer number: ");
    scanf("%d",&number);

    if(number % 2 == 0)
    {
      printf("%d is even number",number);
    }
    else
    {
      printf("%d is odd number",number);
    }

    return 0;
}
