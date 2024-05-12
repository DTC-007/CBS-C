#include <stdio.h>

int main() {
    int arr[10] = {3, 5, 7, 2, 9, 0, 6, 1, 8, 4};  //乱序的

    for (int i = 0; i < 9; ++i) {
        _Bool flag = 0;
        for (int j = 1; j < 10-i; ++j) {  //让j每次只循环未排好序的数
            if (arr[j-1] > arr[j]) {
                int tmp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = tmp;
                flag = 1;
            }
        }
        if (flag == 0) break;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
}