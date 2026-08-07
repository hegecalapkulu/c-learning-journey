// Day20-InsertionSort ----> Insertion Sort Project

#include <stdio.h>

int getArraySize(void) {
  int size = -1;
  while (size <= 0) {
    printf("Please enter size: ");
    scanf("%d", &size);
    if (size <= 0) {
      printf(
          "Error! The number must be greater than zero.\n Please Try Again!\n");
    }
  }
  return size;
}

void fillArray(int size, int array[size]) {
  printf("Enter the array elements:");
  for (int i = 0; i < size; i++) {
    printf("\nEnter Number %d: ", i + 1);
    scanf("%d", &array[i]);
  }
}

void sortArray(int size, int array[size]) {
  int shifts = 0;
  int comparisons = 0;

  for (int i = 1; i < size; i++) {
    int j = i - 1;
    int key = array[i];
    while (j >= 0 && array[j] > key) {
      shifts++;
      comparisons++;
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = key;
    if (j >= 0) {
      comparisons++;
    }
  }

  printf("\n========== Insertion Sort ==========\n\nSorted Array:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  printf("\nTotal Comparisons: %d\nTotal Shifts: %d\n", comparisons, shifts);
}

int main(void) {
  int size = getArraySize();
  int array[size];
  fillArray(size, array);
  sortArray(size, array);
  return 0;
}