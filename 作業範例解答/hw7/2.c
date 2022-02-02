#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(void) {
  int n = 0;
  scanf("%d", &n);
  getchar();
  getchar();
  int i = 0, count = 0;
  char input;
  char string[1000];
  int arr[1000];
  char numbers[1000][100];
  FILE *output;
  output = fopen("output2.txt","w");
  while (1) {
    input = getchar();
    if (input == '\n' || input == ' ') {
      string[i] = '\0';
      arr[count++] = atoi(string);
      i = 0;
      if (input == '\n') break;
    } else {
      string[i++] = input;
    }
  }
  for (int j = 0; j < count; j++) {
    scanf("%s", numbers[j]);
  }
  for (int j = 1; j <= count; j++) {
    for (int k = 0; k < count; k++) {
        if(arr[k] == j){
            printf("%s\n",numbers[k]);
            fprintf(output,"%s\n",numbers[k]);
            break;
        }
    }
  }
  fclose(output);
  return 0;
}