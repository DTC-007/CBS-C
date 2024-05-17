#include <stdio.h>

int sum(int (*p)(int, int), int a, int b){  //将函数指针作为参数传入
    //函数回调
    return p(a, b);    //就像你进了公司然后花钱请别人帮你写代码，工资咱们五五开，属于是直接让别人帮你实现
}

int sumImpl(int a, int b){   //这个函数实现了a + b
    return a + b;
}

int main(){
    int (*p)(int, int) = sumImpl;  //拿到实现那个函数的地址
    printf("%d", sum(p, 10, 20));
}