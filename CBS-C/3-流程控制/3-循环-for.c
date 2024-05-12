#include <stdio.h>

void ex1();   //通常用法
void ex2();   //break
void ex3();   //continue
void ex4();   //嵌套break
void ex5();   //嵌套continue
void ex6();   //指数运算


int main() {
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    ex6();
}

void ex1(){     //通常用法
    //比如现在我们希望循环4次
    for (int i = 0; i < 4; ++i) {
        printf("%d, ", i);
    }
    printf("\n\n");
}

void ex2(){     //break
    for (int i = 0; i < 10; ++i) {
        if(i == 5) break;   //我们希望在满足某个条件下提前终止循环，可以使用break关键字来跳出循环
        printf("%d", i);
    }
    printf("\n\n");
}

void ex3(){     //continue
    for (int i = 0; i < 10; ++i) {
        if(i == 5) continue;   //使用continue关键字会加速循环，无论后面有没有未执行完的代码，都会直接开启下一轮循环
        printf("%d", i);
    }
    printf("\n\n");
}

void ex4(){     //嵌套break
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            if(i == j) break;    //当i == j时终止循环
            printf("%d, %d\n", i, j);
        }
    }
    printf("\n");
}

void ex5(){     //嵌套continue
    for (int i = 1; i < 4; ++i) {
        for (int j = 1; j < 4; ++j) {
            if(i == j) continue;    //当i == j时加速循环
            printf("%d, %d\n", i, j);
        }
    }
    printf("\n");
}

void ex6(){     //指数运算
    int i = 3, res = 1;
    for (int j = 0;j < 3; ++j){
        res *= i;
    }
    printf("%d", res);
}