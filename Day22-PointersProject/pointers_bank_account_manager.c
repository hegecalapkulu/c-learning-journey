// Day22-PointersProject ----> Bank Account Manager Project

#include <stdio.h>

void selectProcess(int *process) {
  *process = -1;
  while (!(*process == 1 || *process == 2 || *process == 3 || *process == 4 ||
           *process == 5 || *process == 6)) {
    printf(
        "===== BANK ACCOUNT MANAGER =====\n\n1 - Deposit\n2 - Withdraw\n3 - "
        "Transfer to Savings\n4 - Transfer to Balance\n5 - Show Accounts\n6- "
        "Exit\n");

    scanf("%d", process);
    if (!(*process == 1 || *process == 2 || *process == 3 || *process == 4 ||
          *process == 5 || *process == 6)) {
      printf("Error Occured! Please Try Again!\n");
    }
  }
}   

void executeProcess(int *process, float *balance, float *savings) {
  float quantity = 0;
  switch (*process) {
  case 1:
    while (quantity <= 0) {
      printf("Enter quantity: ");
      scanf("%f", &quantity);
      if (quantity <= 0) {
        printf("Error , quantity must be greater than zero!\n");
      }
    }
    *balance += quantity;
    break;
  case 2:
    while (quantity <= 0 || *balance < quantity) {
      printf("Enter quantity: ");
      scanf("%f", &quantity);
      if (quantity <= 0) {
        printf("Error , quantity must be greater than zero!\n");
      } else if (quantity > *balance) {
        printf("Error , quantity must be lower than balance!\n");
      }
    }
    *balance -= quantity;
    break;

  case 3:
    while (quantity <= 0 || *balance < quantity) {
      printf("Enter quantity: ");
      scanf("%f", &quantity);
      if (quantity <= 0) {
        printf("Error , quantity must be greater than zero!\n");
      } else if (quantity > *balance) {
        printf("Error , quantity must be lower than balance!\n");
      }
    }

    *balance -= quantity;
    *savings += quantity;
    break;
  case 4:
    while (quantity <= 0 || *savings < quantity) {
      printf("Enter quantity: ");
      scanf("%f", &quantity);
      if (quantity <= 0) {
        printf("Error , quantity must be greater than zero!\n");
      } else if (quantity > *savings) {
        printf("Error , quantity must be lower than savings!\n");
      }
    }
    *balance += quantity;
    *savings -= quantity;
    break;

  case 5:
    printf("Balance: %.2f\nSavings: %.2f\n", *balance, *savings);
    break;
  }
}

int main(void) {
  float balance = 1000.00;
  float savings = 500.00;
  printf("Balance: %.2f\nSavings: %.2f\n", balance, savings);
  int process = -1;
  while (process != 6) {
    selectProcess(&process);
    if (process != 6) {
      executeProcess(&process, &balance, &savings);
    }
  }
  return 0;
}