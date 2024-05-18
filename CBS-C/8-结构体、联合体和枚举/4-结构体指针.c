#include <stdio.h>

struct Student {
    int id;
    int age;
    char * name;
};

int main() {
    struct Student student = {1, 18, "小明"};
    struct Student * p = &student;   //同样的，类型后面加上*就是一个结构体类型的指针了

//    printf("%s", (*p).name);  //由于.运算符优先级更高，所以需要先使用*p得到地址上的值，然后再去访问对应数据
    printf("%s", p->name);   //使用 -> 运算符来快速将指针所指结构体的对应数据取出
}