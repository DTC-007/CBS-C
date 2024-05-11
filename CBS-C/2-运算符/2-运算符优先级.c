#include <stdio.h>

void ex1();   //优先级体现
void ex2();   //提升优先级
void ex3();   //多重小括号
void ex4();   //试验1
void ex5();   //试验2

int main(){
    ex1();
//    ex2();
//    ex3();
//    ex4();
//    ex5();
}

void ex1(){    //优先级体现
    int a = 20, b = 10;
    printf("%d\n\n", a + a * b);   //如果没有优先级，那么结果应该是400
}

void ex2(){    //提升优先级
    int a = 20, b = 10;
    printf("%d\n\n", (a + a) * b);   //优先计算 a + a 的结果，再乘以 b
}

void ex3(){    //多重小括号
    printf("%d\n\n", (1 - (3 + 4)) * (-2 / 1));   //其实写法基本差不多，只需要一律使用小括号即可
}

void ex4(){    //试验1
    int c;
    int a = (3 + (c = 2)) * 6;
    printf("%d\n\n", a);
}

void ex5(){    //试验2
    int b, c;
    int a = (b = 5, c = b + 8);  //逗号运算符从前往后依次执行，赋值结果是最后边的结果
    printf("%d\n\n", a);
}