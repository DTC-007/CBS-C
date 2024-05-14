#include <stdio.h>

void test(int, int);   //函数原型中需要写上需要的参数类型，多个参数用逗号隔开，比如这里我们需要的就是两个int类型的参数


int main() {
    test(10, 20);
}

//计算两数之和
void test(int a, int b) {    //函数具体定义中也要写上，这里的a和b我们称为形式参数（形参），等价于函数中的局部变量，作用域仅限此函数
    printf("%d", a + b);
}