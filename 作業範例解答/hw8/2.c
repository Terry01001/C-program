#include <limits.h>
#include <stdio.h>
#include <string.h>
int num[50];
char seq[50][1001];
char c[4] = {'T', 'G', 'C', 'A'};
int main() {
  FILE *f = fopen("output.txt", "w");
  int cases, n, m;
  int smallestSum;
  int smallest;
  char target[1001];
  int targetSum, tempSum;
  scanf("%d", &cases);
  while (cases--) {
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; ++i) {
      num[i] = 0;
      scanf("%s", seq[i]);
    }
    targetSum = 0;
    for (int i = 0; i < n; ++i) {
      smallest = -1;
      smallestSum = INT_MAX;
      for (int j = 0; j < 4; ++j) {
        tempSum = 0;
        for (int k = 0; k < m; ++k) {
          if (c[j] != seq[k][i]) {
            tempSum++;
          }
        }

        if (tempSum <= smallestSum) {
          smallest = j;
          smallestSum = tempSum;
        }
      }
      targetSum += smallestSum;
      target[i] = c[smallest];
    }
    target[n] = '\0';
    fprintf(f, "%s\n%d\n", target, targetSum);
  }
  fclose(f);
  return 0;
}