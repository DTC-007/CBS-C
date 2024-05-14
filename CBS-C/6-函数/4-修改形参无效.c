#include <stdio.h>

void swap(int, int);

int main() {
    int a = 10, b = 20;
    swap(a, b);

    printf("a = %d, b = %d", a, b);   //最后会得到什么结果？
}

void swap(int a, int b){
    int tmp = a;   //这里对a和b的值进行交换
    a = b;
    b = tmp;
}