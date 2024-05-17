#include <stdio.h>

int * test(int * a){   //函数的返回值类型是int *指针类型的
    return a;
}

int main(){
    int a = 10;
    int * p = test(&a);   //使用指针去接受函数的返回值
    printf("%d ", *p);
    printf("%d", *test(&a));   //当然也可以直接把间接运算符在函数调用前面表示直接对返回的地址取地址上的值
}