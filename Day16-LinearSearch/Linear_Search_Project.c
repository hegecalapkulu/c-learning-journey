// Day16-LinearSearch ----> Linear Search Project //

#include <stdio.h>
int learnNumber(void) {
  int number;
  printf("========== Linear Search ==========\n");
  printf("How many numbers do you want to enter: ");
  scanf("%d", &number);
  return number;
}

void learnArray(int number, int array[number]) {
  for (int i = 0; i < number; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &array[i]);
  }
}

void learnAndSearchTarget(int number, int array[number]) {
  int target;
  int totalFound = 0;
  int comparisons = 0;
  printf("Enter target number: ");
  scanf("%d", &target);
  for (int i = 0; i < number; i++) {
    comparisons++;
    if (target == array[i]) {
      if (totalFound == 0) {
        printf("\n========== RESULT ==========\n\nTarget Found!\n\nValue: %d\n",
               target);
      }
      printf("Index: %d\n", i);
      totalFound++;
    }
  }

  if (totalFound == 0) {
    printf("\n========== RESULT ==========\n\nTarget Not "
           "Found!\n\nComparisons: %d",
           comparisons);
  } else {
    printf("\n\nTotal Found: %d\nComparisons: %d", totalFound, comparisons);
  }
}

int main(void) {
  int number = learnNumber();
  int array[number];
  learnArray(number, array);
  learnAndSearchTarget(number, array);
  return 0;
}