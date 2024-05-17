#include <stdio.h>

void quickSort(int arr[], int left, int right){  //arr是数组，left是起始下标，right是结束下标
    if (left >= right) return;      //都只剩一个元素时结束排序

    int base = arr[left], l = left, r = right;
    while (l < r) {
        while (l < r && arr[r] >= base) r--;    //当右指针的值比基准大时，继续往左推
        arr[l] = arr[r];                        //否则就让右指针值放到左指针处
        while (l <r && arr[l] <= base) l++;     //当左指针的值比基准小时，继续往右推
        arr[r] = arr[l];                        //否则就让左指针值放到右指针处
    }
    arr[l] = base;      //左右指针相遇时出循环，让基准值放到相遇处
    quickSort(arr, left, l - 1);    //基准左边的再次排序
    quickSort(arr, l + 1, right);   //基准右边的再次排序
}

int main() {
    int arr[] = {4, 3, 8, 2, 1, 7, 5, 6, 9, 0};
    quickSort(arr, 0, 9);  //10个数字下标就是0-9
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
}