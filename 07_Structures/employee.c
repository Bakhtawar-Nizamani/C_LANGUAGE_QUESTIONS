#include <stdio.h>
#include <stdlib.h>
struct employee{
  int empID;
  char empName[40];
  float empSalary;
};
int main(void){
    // Create an Employee structure: 
   // salary calculation with bonus 

   struct employee emp1;

   printf("Enter Employee ID: ");
   scanf("%d",&emp1.empID);

   printf("Enter Employee Name: ");
   scanf("%s",emp1.empName);

   printf("Enter Salary: ");
   scanf("%f",&emp1.empSalary);
   
   float bonus;
   if(emp1.empSalary < 5000){
     bonus = emp1.empSalary * 0.10;
   }else{
    bonus = emp1.empSalary * 0.5;
   }
   
   float total_Salary = emp1.empSalary + bonus;
   
   system("cls"); // To clear screen

   // Print Information
   printf("\n\n\t\t___________Employee Information____________");
   printf("\n\n\t\tEmployee ID: %d",emp1.empID);
   printf("\n\t\tEmployee Name: %s",emp1.empName);
   printf("\n\t\tOriginal Salary: %.2f",emp1.empSalary);
   printf("\n\t\tBonus : %.2f",bonus);
   printf("\n\t\tTotal Salary : %.2f\n\n",total_Salary);

    return 0;
}