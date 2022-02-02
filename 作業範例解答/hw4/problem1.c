#include "stdio.h"

int main(void) {
  int array[] = {1, 2, 3, 4, 5, 6};
  int len = sizeof(array) / sizeof(array[0]);

  for (int i = 0; i < len - 1; i++) {
    if ((i % 2 == 0 && array[i] > array[i + 1]) ||
        (i % 2 == 1 && array[i] < array[i + 1])) {
      int temp = array[i];
      array[i] = array[i + 1];
      array[i + 1] = temp;
    }
  }

  for (int i = 0; i < len; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
