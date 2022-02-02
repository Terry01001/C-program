#include "stdio.h"

int main(void) {
  FILE *final, *key, *output;
  final = fopen("final.txt", "r");
  key = fopen("key.txt", "r");
  output = fopen("output.txt","w");
  char f, k;
  while (1) {
    f = fgetc(final);
    k = fgetc(key);
    if (f == EOF || k == EOF) break;
    if (k == '@') fputc(f,output);
  }
  fclose(final);
  fclose(key);
  fclose(output);
  return 0;
}