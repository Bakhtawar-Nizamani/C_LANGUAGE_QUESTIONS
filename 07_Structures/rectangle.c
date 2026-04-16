#include <stdio.h>
#include <stdlib.h>
struct rectangle{
  float length;
  float width;
};
float calculateArea(float length, float width);
float calculate_Perimeter(float length , float width);
int main(void){
  // Create a Rectangle structure: 
  // calculate area & perimeter 
  
  struct rectangle rect1;

  printf("Please enter the length of rectangle? ");
  scanf("%f",&rect1.length);

  printf("Please enter the width of rectangle? ");
  scanf("%f",&rect1.width);
  
  system("cls"); // to clear screen

  printf("\n\n\t\tArea of Rectangle = %.2f",calculateArea(rect1.length,rect1.width));
  printf("\n\n\t\tPerimeter of Rectangle = %.2f",calculate_Perimeter(rect1.length,rect1.width));


  return 0;
}
float calculateArea(float length, float width){
  return length * width;
}
float calculate_Perimeter(float length, float width){
  return 2*(length + width);
}