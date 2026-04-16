#include <stdio.h>
struct bankAccount{
    int balance;
};
int deposit(int balance);
int withdraw(int balance);
int balanceCheck(int balance);

int main(void){
  // Create a BankAccount structure: 
  // deposit, withdraw, balance check 

  struct bankAccount acc1;
  acc1.balance = 0;
  
  int choice;
  do{
    printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
    scanf("%d",&choice);
    if(choice == 1){
        acc1.balance = deposit(acc1.balance);
    }else if(choice == 2){
        acc1.balance = withdraw(acc1.balance);
    }else if(choice == 3){
        printf("The current balance is = %d",acc1.balance);
    }else if(choice == 4){
        printf("Exiting...");
    }
    else{
        printf("Invalid Choice!");
    }

  }while(choice != 4);
  
    
    return 0;
}
int deposit(int balance){
   int amount;
   printf("Please enter amount: ");
   scanf("%d",&amount);
   return balance = balance + amount;
}
int withdraw(int balance){
   int amount;
   printf("Enter amount to withdraw: ");
   scanf("%d",&amount);
   if(balance < amount){
    printf("Not enough amount\n");
    return balance;
   }else if(amount <= 0){
    printf("Invalid Amount\n");
    return balance;
   }
   else{
    return balance = balance - amount;
   }
}