#include <stdio.h>

void ex1();   //通常用法
void ex2();   //加default
void ex3();   //嵌套if


int main() {
    ex1();
    ex2();
    ex3();
}

void ex1(){     //通常用法
    char c = 'A';
    switch (c) {  //这里目标就是变量c
        case 'A':    //分别指定ABC三个匹配值，并且执行不同的代码
            printf("去尖子班！准备冲刺985大学！");
            break;   //执行完之后一定记得break，否则会继续向下执行下一个case中的代码
        case 'B':
            printf("去平行班！准备冲刺一本！");
            break;
        case 'C':
            printf("去职高深造。");
            break;
    }
    printf("\n\n");
}

void ex2(){     //加default
    char c = 'A';
    switch (c) {
        case 'A':
            printf("去尖子班！");
            break;
        case 'B':
            printf("去平行班！");
            break;
        case 'C':
            printf("去差生班！");
            break;
        default:   //其他情况一律就是下面的代码了
            printf("去读职高，分流");
    }
    printf("\n\n");
}

void ex3(){     //嵌套if
    char c = 'A';
    switch (c) {
        case 'A':
            if(c == 'A') {    //嵌套一个if语句
                printf("去尖子班！");
            }
            break;
        case 'B':
            printf("去平行班！");
            break;
    }
}