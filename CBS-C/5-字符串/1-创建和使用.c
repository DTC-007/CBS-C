#include <stdio.h>

void ex1();   //单字符保存
void ex2();   //字符串保存


int main() {
    ex1();
    ex2();
}

void ex1() {    //单字符保存
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};  //直接保存单个字符，但是注意，无论内容是什么，字符串末尾必须添加一个‘\0’字符（ASCII码为0）表示结束
    printf("%s", str);   //用%s来作为一个字符串输出

    printf("\n\n");
}

void ex2() {    //字符串保存
    char str[] = "Hello";   //直接使用双引号将所有的内容囊括起来，并且也不需要补充\0（但是本质上是和上面一样的字符数组）
    //也可以添加 const char str[] = "Hello World!"; 双引号囊括的字符串实际上就是一个const char数组类型的值
    printf("%s", str);
}