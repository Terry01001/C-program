#include "stdio.h"

int main(void) {
  int array[] = {1, 2, 3, 4, 5, 6};
  int len = sizeof(array) / sizeof(array[0]);
  int k;

  printf("The given array is:");
  for (int i = 0; i < len; i++) {
    printf("%d ", array[i]);
  }
  printf("\nThe length of subarray is:");
  scanf("%d", &k);

  for (int i = 0; i < len - k + 1; i++) {
    int max = 0;
    for (int j = i; j < i + k; j++) {
      printf("%d ", array[j]);
      if (array[j] > max) {
        max = array[j];
      }
    }
    printf("-----> %d\n", max);
  }

  return 0;
}
