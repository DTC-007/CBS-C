#include <stdio.h>

typedef int lbwnb;   //食用方式：typedef 类型名称 自定义类型别名
typedef const char * String;   //const char * 我们就起个名称为String表示字符串
typedef struct test {
    int age;
    char name[10];
} Student;   //为了方便可以直接写到后面，当然也可以像上面一样单独声明

int main() {
    lbwnb i = 666;   //类型名称直接写成别名，实际上本质还是int
    printf("%d\n", i);

    String str = "Hello World!";  //是不是有Java那味了
    printf(str);

    Student student = {18, "小明"};   //直接使用别名，甚至struct关键字都不用加了
}