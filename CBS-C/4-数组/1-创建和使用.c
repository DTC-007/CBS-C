#include <stdio.h>

void ex1();   //基本语法
void ex2();   //修改数组
void ex3();   //不设初值


int main() {
    ex1();
    ex2();
    ex3();
}

void ex1() {        //基本语法
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < 12; ++i) {
        int days = arr[i];   //直接通过数组 名称[下标] 来访问对应的元素值，再次提醒，下标是从0开始的，不是1
        printf("2022年 %d 月的天数是：%d 天\n", (i + 1), days);
    }
    printf("\n");
}

void ex2() {        //修改数组
    int arr[] = {666, 777, 888};
    arr[1] = 999;   //比如我们现在想要让第二个元素的值变成999
    printf("%d", arr[1]);   //打印一下看看是不是变成了999

    printf("\n\n");
}

void ex3() {        //不设初值
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        printf("%d, ", arr[i]);
    }
}