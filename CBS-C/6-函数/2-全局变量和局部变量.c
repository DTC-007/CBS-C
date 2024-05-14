#include <stdio.h>

void test();

int a = 10;   //我们可以直接将变量定义放在外面，这样所有的函数都可以访问了

int main() {
    a += 10;
    test();    //现在各位觉得，这两个操作完成后，a会是多少呢？
    printf("%d", a);
}

void test(){
    a += 10;
}