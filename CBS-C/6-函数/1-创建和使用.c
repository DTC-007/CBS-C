#include <stdio.h>

void test();

int main() {
    test();
    printf("Hello World!");   //实际上printf也是一个函数，功能是向控制台打印字符串，只不过这个函数是系统提供的，已经提前实现好了，其中的参数我们后续还会进行介绍
}

void test(void){   //函数具体定义，添加一个花括号并在其中编写程序代码，就和我们之前在main中编写一样
    printf("我是测试函数!");
}