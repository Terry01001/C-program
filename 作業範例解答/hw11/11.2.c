#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *str = (char *)malloc(100 * sizeof(char));
    char *cmpStr = (char *)malloc(100 * sizeof(char));
    int n = 0;
    scanf("%d", &n);
    getchar();
    while (n--) {
        scanf("%s", str);
        int min = 99999999;
        for (int i = strlen(str); i > 0; i--) {
            if (strlen(str) % i != 0) continue;
            for (int j = 0; j < strlen(str); j += i) {
                for (int k = 0; k < i; k++) cmpStr[k + j] = str[k];
            }
            cmpStr[strlen(str)] = '\0';
            if (strcmp(str, cmpStr) == 0) min = i;
        }
        printf("%d\n", min);
    }
    return 0;
}