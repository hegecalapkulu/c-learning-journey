// Day19-SelectionSort ----> Selection Sort Project

#include <stdio.h>

int getArraySize(void) {
  printf("========== Selection Sort ==========\nHow many numbers do you want "
         "to enter: ");
  int size;
  scanf("%d", &size);
  if (size <= 0) {
    printf("Error!\nArray size must be greater than 0.\n");
    return -1;
  }
  return size;
}

void fillArray(int size, int array[size]) {
  for (int i = 0; i < size; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &array[i]);
  }
}

void sortArray(int size, int array[size]) {
  int swaps = 0;
  int comparisons = 0;

  for (int i = 0; i < size - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
      comparisons++;
      if (array[minIndex] > array[j]) {
        minIndex = j;
      }
    }
    if (minIndex != i) {
      int temp = array[i];
      array[i] = array[minIndex];
      array[minIndex] = temp;
      swaps++;
    }
  }

  printf("\n========== RESULT ==========\n\n");
  printf("Sorted Array:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\nTotal Comparisons: %d", comparisons);
  printf("\nTotal Swaps: %d\n", swaps);
}

int main(void) {
  int size = getArraySize();
  if (size == -1) {
    return 1;
  }
  int array[size];
  fillArray(size, array);
  sortArray(size, array);
  return 0;
}
