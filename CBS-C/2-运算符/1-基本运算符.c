#include <stdio.h>

void ex1();   //加法
void ex2();   //减法
void ex3();   //负数
void ex4();   //乘除
void ex5();   //取模运算

int main(){
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
}

void ex1(){    //加法
    int a = 10, b = 5;
    printf("%d\n\n", a + b);   //打印 a + b 的结果
}

void ex2(){    //减法
    int a = 10, b = 5;
    printf("%d\n\n", a - b);   //打印 a - b 的结果
}

void ex3(){    //负数
    int a = -10;   //等于 -10
    printf("%d\n\n", -a);   //输出 -a 的值，就反着来嘛
}

void ex4(){    //乘除
    int a = 20, b = 10;
    printf("%d, %d\n\n", a * b, a / b);   //使用方式和上面的加减法是差不多的
}

void ex5(){    //取模运算
    int a = 20, b = 8;
    printf("%d\n\n", a % b);   //取模运算实际上就是计算a除以b的余数
}

