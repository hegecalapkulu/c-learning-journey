// Day 17 - Binary Search Project

#include <stdio.h>

int getArraySize(void) {
  int size;
  printf(
      "\n========== Binary Search ==========\nHow many numbers do you want to "
      "enter:");
  scanf("%d", &size);
  if (size <= 0) {
    printf("Error!\nArray size must be greater than 0.\n");
    return -1;
  }
  return size;
}

int fillSortedArray(int size, int numbers[size]) {
  for (int i = 0; i < size; i++) {
    printf("Enter number %d in ascending order: ", i + 1);
    scanf("%d", &numbers[i]);

    if (i > 0 && numbers[i] < numbers[i - 1]) {
      printf("Error!\nPlease enter the numbers in ascending order.\n");
      return -1;
    }
  }
  return 0;
}

void binarySearch(int size, int numbers[size], int target) {

  int left = 0;
  int right = size - 1;
  int middle;
  int comparisons = 0;
  int found = 0;

  while (left <= right) {
    middle = (left + right) / 2;
    comparisons++;
    if (target == numbers[middle]) {
      printf("\n========== RESULT ==========\n\nTarget Found!\n\nValue: "
             "%d\nIndex: %d\nComparisons: %d",
             target, middle, comparisons);
      found = 1;
      break;
    }
    if (target > numbers[middle]) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }
  if (found == 0) {
    printf("\n========== RESULT ==========\n\nTarget Not "
           "Found!\n\nComparisons: %d",
           comparisons);
  }
}
int main(void) {
  int size = getArraySize();
  if (size == -1) {
    return 1;
  }
  int numbers[size];
  int status = fillSortedArray(size, numbers);
  if (status == -1) {
    return 1;
  }

  int target;
  printf("Enter target number: ");
  scanf("%d", &target);
  binarySearch(size, numbers, target);
  return 0;
}
