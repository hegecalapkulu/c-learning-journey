#include <stdio.h>


int hmUnsuccesful = 0;
int hmSuccesful = 0;
float budget ;
float startingbudget;


char determineProcess(void){
char preference;
    printf ("Please enter the first letter of your transaction\n\n[D] Deposit\n[W] Withdraw\n");
    scanf (" %c" , &preference);
while (preference != 'D'&&  preference != 'W'){
    printf ("You entered wrong letter , please try again !\n");
    scanf (" %c" , &preference);}

    return preference ;
}

void addMoney (float x){
    budget += x ;
    hmSuccesful ++;
    printf ("Current Balance: %.2f\n" , budget);

}

void reduceMoney (float x){
   
  
    if (budget - x >= 0){
        budget -= x;
        hmSuccesful ++ ;
        printf ("Current Balance: %.2f\n" , budget);
    }
else {
printf ("INSUFFICIENT BALANCE , Please Try Again !\n");
hmUnsuccesful ++;
}

}

void printEverydetails(void){
    printf("Starting budget: %.2f\n\nNumber of successful transactions: %d\nNumber of unsuccessful transactions: %d\n\nLast budget: %.2f"
,startingbudget ,hmSuccesful , hmUnsuccesful , budget);
}

int asknumberofTransactions(void){
    int abc;
    printf("Enter number of transactions: ");
     scanf("%d" , &abc);
     return abc;
   
}

int main(void){
    int asktime = asknumberofTransactions();
   printf ("\nPlease enter your starting budget: ");
scanf ("%f" , &startingbudget);
budget = startingbudget ;
    for (int i = 0 ; i < asktime ; i++){
 

    char transaction = determineProcess();
 printf ("\nPlease enter the amount you want to add or subtract: ");
 float amount;   
 scanf ("%f" , &amount);
    if (amount <= 0)
{
    printf("Amount must be greater than zero.\n");
    hmUnsuccesful++;
}
else if (transaction == 'D')
{
    addMoney(amount);
}
else
{
    reduceMoney(amount);
}
}
printEverydetails ();
return 0;

}


