#include <stdio.h>

int powerOfTwo[65];

void solve(int pos, int target, int length) {
    if (target >= length - (pos - 1)) {
        printf("0\n");
        return;
    }
    length -= pos - 1;
    for (int i = 1, j = pos - 2; j > 0; i++, j--) {
        if (target >= length - j * powerOfTwo[i - 1]) {
            target = ((target - (length - j * powerOfTwo[i - 1])) %
                      powerOfTwo[i - 1]) +
                     1;
            length = powerOfTwo[i - 1];
            if (target == length)
                printf("%d\n", i);
            else
                solve(i, target, length);
            return;
        }
        length = length - j * powerOfTwo[i - 1];
    }
}

int main() {
    int n, start;
    powerOfTwo[0] = 1;
    for (int i = 1; i < 64; i++) powerOfTwo[i] = powerOfTwo[i - 1] * 2;
    while (scanf("%d", &n) && n != 0) {
        for (int i = 0; i < 64; i++) {
            if (n < powerOfTwo[i]) {
                start = i;
                break;
            }
        }
        if (powerOfTwo[start - 1] == n)
            printf("%d\n", start - 1);
        else
            solve(start, n, powerOfTwo[start]);
    }
    return 0;
}