#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void stringLength(char str[]) {
  int i = 0;
  while (str[i] != '\0') i++;
  printf("%d\n", i);
  return;
}

void equalString(char str1[], char str2[]) {
  int flag = 0;
  int i = 0;
  do {
    if (str1[i] != str2[i]) {
      flag = 1;
      break;
    }
    i++;
  } while (str1[i] != '\0' && str2[i] != '\0');
  if (str1[i] != str2[i]) flag = 1;
  if (flag)
    printf("兩個字串不相等\n");
  else
    printf("兩個字串相等\n");
  return;
}

void mergeString(char str1[], char str2[]) {
  char str[1024];
  int i = 0, j = 0;
  while (str1[j] != '\0') str[i++] = str1[j++];
  j = 0;
  while (str2[j] != '\0') str[i++] = str2[j++];
  str[i] = '\0';
  printf("連接兩個字串：%s\n", str);
  return;
}

void reverseString(char str1[], char str2[]) {
  char str[1024], reverse[1024];
  int i = 0, j = 0;
  while (str1[j] != '\0') str[i++] = str1[j++];
  j = 0;
  while (str2[j] != '\0') str[i++] = str2[j++];
  j = 0;
  while (i--) {
    reverse[j++] = str[i];
  }
  reverse[j] = '\0';
  printf("顛倒連接後字串：%s\n", reverse);
  return;
}

int main(void) {
  char str1[512] , str2[512] ;
  printf("請輸入第一個字串：");
  scanf("%s",str1);
  printf("請輸入第二個字串：");
  scanf("%s",str2);
  printf("\n");
  printf("計算字串一長度：");
  stringLength(str1);
  printf("計算字串二長度：");
  stringLength(str2);
  equalString(str1, str2);
  mergeString(str1, str2);
  reverseString(str1, str2);
  return 0;
}