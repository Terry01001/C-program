#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

int main(void) {
  FILE *f;
  srand(time(NULL));
  f = fopen("random.txt", "w");
  char input, output;
  char buffer[1001];
  for (int i = 0; i < 1000; i++) {
    output = (rand() % 26) + 65 + (rand() % 2) * 32;
    fputc(output, f);
  }
  fclose(f);
  f = fopen("random.txt", "r");
  fread(buffer, sizeof(char), 1000, f);
  int count;
  while (1) {
    printf("請輸入要找的字元: ");
    input = getchar();
    getchar();
    if (input == '*') {
      printf("結束尋找。\n");
      break;
    } else if (!('a' <= input && input <= 'z') &&
               !('A' <= input && input <= 'Z')) {
      printf("輸入錯誤，請再試一次。\n");
      continue;
    }
    count = 0;
    for (int i = 0; i < strlen(buffer); i++) {
      if (input == buffer[i]) count++;
    }
    printf("字元'%c'一共找到: %d個\n", input,count);
  }
  fclose(f);
  return 0;
}