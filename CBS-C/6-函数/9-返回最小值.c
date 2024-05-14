#include <stdio.h>

int findMin(int arr[], int len);   //需要两个参数，一个是数组本身，还有一个是数组的长度

int main() {
    int arr[] = {1, 4, -9, 2, -4, 7};
    int min = findMin(arr, 6);
    printf("第一个小于0的数是：%d", min);
}

int findMin(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        if(arr[i] < 0) return arr[i];   //当判断找到后，直接return返回即可，这样的话函数会直接返回结果，无论后面还有没有代码没有执行完，整个函数都会直接结束。
    }
    return 0;   //如果没有找到就返回0
}