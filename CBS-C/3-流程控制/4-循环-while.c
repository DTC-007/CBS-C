#include <stdio.h>

void ex1();   //通常用法
void ex2();   //关键字使用
void ex3();   //do-while


int main() {
    ex1();
    ex2();
    ex3();
}

void ex1(){     //通常用法
    int i = 100;   //比如现在我们想看看i不断除以2得到的结果会是什么，但是循环次数我们并不明确
    while (i > 0) {   //现在唯一知道的是循环条件，只要大于0那么就可以继续除
        printf("%d, ", i);
        i /= 2;   //每次循环都除以2
    }
    printf("\n\n");
}

void ex2(){     //关键字使用
    int i = 100;
    while (i > 0) {
        if(i < 30) break;
        printf("%d, ", i);
        i /= 2;
    }
    printf("\n\n");
}

void ex3(){     //do-while
    do {  //无论满不满足循环条件，先执行循环体里面的内容
        printf("Hello World!");
    } while (0);   //再做判断，如果判断成功，开启下一轮循环，否则结束
}