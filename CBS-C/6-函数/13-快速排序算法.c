#include <stdio.h>

void quickSort(int arr[], int left, int right){  //arr是数组，left是起始下标，right是结束下标
    //请实现这一部分
}

int main() {
    int arr[] = {4, 3, 8, 2, 1, 7, 5, 6, 9, 0};
    quickSort(arr, 0, 9);  //10个数字下标就是0-9
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
}