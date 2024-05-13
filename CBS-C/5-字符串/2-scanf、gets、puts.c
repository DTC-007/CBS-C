#include <stdio.h>

void ex1();   //数组输入
void ex2();   //非数组输入
void ex3();   //字符串IO函数
void ex4();   //单字符IO函数


int main() {
//    ex1();
//    ex2();
    ex3();
    ex4();
}

void ex1() {    //数组输入
    char str[10];
    scanf("%s", str);   //使用scanf函数来接受控制台输入，并将输入的结果按照格式，分配给后续的变量
    //比如这里我们想要输入一个字符串，那么依然是使用%s（和输出是一样的占位符），后面跟上我们要赋值的数组（存放输入的内容）
    printf("输入的内容为：%s", str);

    printf("\n\n");
}

void ex2() {    //非数组输入
    int a, b;
    scanf("%d", &a);   //连续扫描两个int数字
    scanf("%d", &b);   //注意，如果不是数组类型，那么这里在填写变量时一定要在前面添加一个&符号（至于为什么，下一章在指针小节中会详细介绍）这里的&不是做与运算，而是取地址操作

    printf("a + b = %d", a + b);   //扫描成功后，我们来计算a + b的结果
}

void ex3() {    //字符串IO函数
    char str[10];
    gets(str);   //gets也是接收控制台输入，然后将结果丢给str数组中
    puts(str);   //puts其实就是直接打印字符串到控制台
}

void ex4() {    //单字符IO函数
    int c = getchar();  //不能输入中文，只获取一个字符
    putchar(c);
}