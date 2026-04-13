#include <stdio.h>
#include <stdlib.h>
// Student Structure
struct Student{
    char name[40];
    int rollNum;
    int marks;
};
char calculateGrade(int marks); // To calculate student marks
int main(void){
    // Create a Student structure with (name,rollNum,marks)
    // function to calculate grade
    
   struct Student s1;
   printf("Please enter your name: ");
   gets(s1.name);
   printf("Please enter your rollNumber: ");
   scanf("%d",&s1.rollNum);
   printf("Please enter your marks: ");
   scanf("%d",&s1.marks);
   
 
   system("cls");  // To clear screen
   char grade = calculateGrade(s1.marks); // Function calling

   // Print Information of Student
   printf("\n\t\tSTUDENT INFORMATION\n");
   printf("\n\t\tStudent Name = %s",s1.name);
   printf("\n\t\tStudent Roll Number = %d",s1.rollNum);
   printf("\n\t\tStudent Marks = %d",s1.marks);
   printf("\n\t\tStudent Grade = %c\n\n",grade);
   
    return 0;
}
char calculateGrade(int marks){
    if(marks >= 90 && marks <= 100){
        return 'A';
    }else if (marks >= 80 && marks <= 89)
    {
        return 'B';
    }else if(marks >= 70 && marks <= 79){
        return 'C';
    }else if(marks >= 60 && marks <= 69){
        return 'D';
    }else if(marks >= 40 && marks <= 59){
        return 'E';
    }else{
        return 'F';
    }
}