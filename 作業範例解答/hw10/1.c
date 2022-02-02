#include <stdio.h>
#define SIZE 10

int *bubble_sort(int arr[]) {
    static int sorted[SIZE];
    int temp;
    for (int i = 0; i < SIZE; i++) {
        sorted[i] = arr[i];
    }
    for (int i = 0; i < SIZE - 1; ++i)          //循環N-1次
        for (int j = 0; j < SIZE - 1 - i; ++j)  //每次循環要比較的次數
            if (sorted[j] > sorted[j + 1])      //比大小後交換
            {
                temp = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = temp;
            }
    return sorted;
}
int *insertion_sort(int arr[]) {
    static int sorted[SIZE];
    int temp;
    for (int i = 0; i < SIZE; i++) {
        sorted[i] = arr[i];
    }
    for (int i = 1; i < SIZE; ++i) {
        temp = sorted[i];  //將第i個元素複製到temp做插入排序的動作
        int j;
        for (j = i - 1; j >= 0 && sorted[j] > temp; --j)  //從後向前做比較
        {
            sorted[j + 1] = sorted[j];  //將較大的元素通通向右方做shift的動作
        }
        sorted[j + 1] = temp;  //找到位置後插入
    }
    return sorted;
}
int *selection_sort(int arr[]) {
    static int sorted[SIZE];
    int temp;
    for (int i = 0; i < SIZE; i++) {
        sorted[i] = arr[i];
    }
    for (int i = 0; i < SIZE; i++) {
        int min = 99999999, idx = -1;
        for (int j = i; j < SIZE; j++) {
            if (sorted[j] < min) {
                idx = j;
                min = sorted[j];
            }
        }
        temp = sorted[i];
        sorted[i] = sorted[idx];
        sorted[idx] = temp;
    }
    return sorted;
}

int main(void) {
    int arr[SIZE], method, *sorted;

    printf("Please enter %d number(s):\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf(
        "Please select sorting method:\n(1) Bubble sort (2) Insertion sort (3) "
        "Selection sort >> ");
    scanf("%d", &method);

    switch (method) {
        case 1:
            sorted = bubble_sort(arr);
            break;

        case 2:
            sorted = insertion_sort(arr);
            break;

        case 3:
            sorted = selection_sort(arr);
            break;

        default:
            break;
    }
    
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", sorted[i]);
    }
    puts("");
    
    return 0;
}