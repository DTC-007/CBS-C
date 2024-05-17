#include <stdio.h>

void ex1();   //const在前
void ex2();   //const在后
void ex3();   //都有


int main() {
    ex1();
    ex2();
    ex3();
}

void ex1() {    //const在前 不能改值可以改地址
    int a = 9, b = 10;
    const int * p = &a;
    *p = 20;   //这里直接报错，因为被const标记的指针，所指地址上的值不允许发生修改
    p = &b;   //但是指针指向的地址是可以发生改变的
}

void ex2() {    //const在后 可以改值不能改地址
    int a = 9, b = 10;
    int * const p = &a;   //const关键字被放在了类型后面
    *p = 20;   //允许修改所指地址上的值
    p = &b;   //但是不允许修改指针存储的地址值，其实就是反过来了
}

void ex3() {    //都有
    int a = 9, b = 10;
    const int * const p = &a;
    *p = 20;   //两个都直接报错，都不让改了
    p = &b;
}