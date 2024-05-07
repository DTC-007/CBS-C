#include <stdio.h>

int main(){
    int a = 10; //将10作为a的值
    int b = 50;
    int c = a + b;   //注意变量一定要先声明再使用，这里是计算a + b的结果（算式），并作为c的初始值
    printf("c的值为：%d", c);   //使用%d来代表一个整数类型的数据（占位符），在打印时会自动将c的值替换上去
}