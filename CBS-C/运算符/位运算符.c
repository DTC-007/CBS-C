#include <stdio.h>

void ex1();   //位运算效果
void ex2();   //右移
void ex3();   //按位与
void ex4();   //按位或
void ex5();   //按位非

int main(){
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
}

void ex1(){    //位运算效果
    int a = 10;
    a *= 2;  //很明显算完之后a就是20了
    int b = 10;
//    b <<= 1;
    b = b << 1;   //也可以写成复合形式 a <<= 1
    printf("a = %d, b = %d\n\n", a, b);
}

void ex2(){    //右移
    int a = 6;
    a = a >> 1;   //右移其实就是除以2的操作
    printf("a = %d\n\n", a);
}

void ex3(){    //按位与
    int a = 6, b = 4;
    int c = a & b;   //按位与操作
    printf("c = %d\n\n", c);
}

void ex4(){    //按位或
    int a = 6, b = 4;
    int c = a | b;
    printf("c = %d\n\n", c);
}

void ex5(){    //按位非
    int a = 6, b = 4;
    int c = a ^ b;
    //注意^不是指数运算，表示按位异或运算，让两个数的每一位都进行比较，如果两个数对应bit位上不同时为1或是同时为0，那么结果就是1，否则结果就是0，所以这里的结果就是2
    a = ~a;   //按位否定针对某个数进行操作，它会将这个数的每一个bit位都置反，0变成1，1变成0，猜猜会变成几
    printf("c = %d a = %d\n\n", c,a);
}