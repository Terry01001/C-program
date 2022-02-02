#include <math.h>
#include <stdio.h>

int main(void) {
    int n, count;
    double students[1000], sum, avg, ans1, ans2;
    while (scanf("%d", &n) && n > 0) {
        sum = 0;
        ans1 = 0;
        ans2 = 0;
        count = 0;
        for (int i = 0; i < n; i++) {
            scanf("%lf", &students[i]);
            sum += students[i];
        }
        avg = sum / n;
        avg = round(avg * 100.0) / 100.0;
        for (int i = 0; i < n; i++) {
            
            if (students[i] > avg) {
                ans1 += students[i] - avg;
            } else{
                if (students[i] - avg != 0) count++;
                ans2 += avg - students[i];

            }
        }
        if (count == 0)
            printf("$%.2lf\n", ans1 / 2);
        else if (ans1 < ans2) {
            printf("$%.2lf\n", ans1);
        } else {
            printf("$%.2lf\n", ans2);
        }
    }
    return 0;
}