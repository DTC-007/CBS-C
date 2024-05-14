#include <stdio.h>

void test(int a){
    a += 10;
    printf("%d\n", a);
}

int main() {
    int a = 10;
    test(a);
    test(a);   //连续两次调用，那么这两次的结果会是什么？
}