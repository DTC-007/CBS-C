#include <stdio.h>

void ex1();   //自增运算
void ex2();   //++在后自增运算
void ex3();   //复合赋值运算符
void ex4();   //自减运算
void ex5();   //优先级规则

int main(){
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
}

void ex1(){    //自增运算
    int a = 10;
    //int b = a = a + 1;  下面效果完全一致
    int b = ++a;
//    printf("%d\n\n", b);
    printf("a = %d, b = %d\n\n", a, b);
}

void ex2(){    //++在后自增运算
    int a = 10;
    int b = a++;   //写在后面和写在前面是有区别的
    printf("a = %d, b = %d\n\n", a, b);
}

void ex3(){    //复合赋值运算符
    int a = 10;
    int b = a += 5;
    printf("a = %d\n\n", b);
}

void ex4(){    //自减运算
    int a = 10;
    a--;   //--是自减操作，相当于a = a - 1，也可以在前后写，规则和上面的自增是一样的
    printf("a = %d\n\n", a);
}

void ex5(){    //优先级规则
    int a = 10;
    int b = 5 * --a;
    printf("b = %d", b);
}