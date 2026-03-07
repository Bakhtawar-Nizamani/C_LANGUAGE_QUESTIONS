#include <stdio.h>
int main(void){
    // Calculate electricity bill using slabs
    int units_consumed,energy_charges,power_charges;
    int FPA; // FPA = Rs 3 per unit  
    float GST;       
    int meter_rent = 50;
    float total_bill;
    int first_cost = 0,second_cost = 0, third_cost = 0;
   
   printf("Enter UNITS CONSUMED: ");
   scanf("%d",&units_consumed);
   
   if(units_consumed == 0){                 // When units = 0
     printf("No units consumed. Bill = 0");      
     return 0;
   }

   if(units_consumed > 0 && units_consumed <= 100){
     
    // 0-100 units -> Rs 12 per unit
    first_cost = units_consumed * 12;
    second_cost = 0;
    third_cost = 0;

   }
   else if (units_consumed >= 101 && units_consumed <= 200)
   {
    // 101-200 units -> Rs 18 per unit
    first_cost = 100 * 12;
    second_cost = (units_consumed - 100) * 18;
    third_cost = 0;
 
   }else if (units_consumed > 200)
   {
    first_cost = 100 * 12;
    second_cost = 100 * 18;
    third_cost = (units_consumed - 200) * 25;
   }
   
   
   energy_charges = first_cost + second_cost + third_cost;
   FPA = units_consumed * 3;
   power_charges = energy_charges + FPA;
   GST = power_charges * 0.18;
   total_bill = energy_charges + FPA + GST + meter_rent;

   printf("\n\n\t\t---------------------------------------------");
   printf("\n\n\t\t\t\tCHARGES");
   printf("\n\n\t\t---------------------------------------------\n");
   printf("\n\n\t\tUNITS CONSUMED = %d",units_consumed);
   printf("\n\t\tENERGY CHARGES = %d",energy_charges);
   printf("\n\t\tFUEL PRICE ADJUSTMENT = %d",FPA);
   printf("\n\t\tMETER RENT = %d",meter_rent);
   printf("\n\t\tPOWER CHARGES = %d",power_charges);

   printf("\n\n\t\tTOTAL = %.2f",total_bill);
   

}