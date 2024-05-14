#include <stdio.h>

void test();

int main() {
    test();
    test();
}

void test() {
    static int a = 20;   //静态变量并不会在函数结束时销毁其值，而是保持
    a += 20;
    printf("%d ", a);
}