#include <stdio.h>

void test(int arr[]);

int main() {
    int arr[] = {4, 3, 8, 2, 1, 7, 5, 6, 9, 0};
    test(arr);
    printf("%d", arr[0]);  //打印的是修改后的值了
}

void test(int arr[]) {
    arr[0] = 999;   //数组就可以做到这边修改，外面生效
}