// Day18-BubbleSort ----> Bubble Sort Project

#include <stdio.h>

int getArraySize(void) {
  printf("========== Bubble Sort ==========\n");
  printf("How many numbers do you want to enter: ");
  int arraySize;
  scanf("%d", &arraySize);
  if (arraySize <= 0) {
    printf("Error!\nArray size must be greater than 0.");
    return -1;
  }
  return arraySize;
}

void fillArray(int arraySize, int array[arraySize]) {
  for (int i = 0; i < arraySize; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &array[i]);
  }
}

void bubbleSort(int arraySize, int array[arraySize]) {
  int comparisons = 0;
  int swaps = 0;
  for (int i = 0; i < arraySize - 1; i++) {
    int swapped = 0;
    for (int j = 0; j < arraySize - 1 - i; j++) {
      comparisons++;
      if (array[j] > array[j + 1]) {
        swaps++;
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        swapped = 1;
      }
    }
    if (swapped == 0) {
      break;
    }
  }

  printf("\n========== RESULT ==========\n\nSorted Array:\n");
  for (int i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
  printf("\nTotal Comparisons: %d\nTotal Swaps: %d\n", comparisons, swaps);
}

int main(void) {
  int arraySize = getArraySize();
  if (arraySize == -1) {
    return 1;
  }
  int array[arraySize];
  fillArray(arraySize, array);
  bubbleSort(arraySize, array);
  return 0;
}
