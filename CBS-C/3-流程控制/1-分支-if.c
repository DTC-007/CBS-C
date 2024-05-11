#include <stdio.h>

void ex1();   //基本判断
void ex2();   //多个else
void ex3();   //条件嵌套


int main() {
    ex1();
    ex2();
    ex3();
}

void ex1(){     //基本判断
    int i = 0;
    if(i > 20) {
        printf("Hello World!");  //满足if条件才执行
    } else {
        printf("LBWNB");   //不满足if条件才执行
    }
    printf("\n\n");
}

void ex2(){     //多个else
    int score = 2;
    if(score >= 90) {
        printf("优秀");
    } else if (score >= 70) {
        printf("良好");
    } else if (score >= 60){
        printf("及格");
    } else{
        printf("不及格");
    }
    printf("\n\n");
}

void ex3(){     //条件嵌套
    int score =  2;
    if(score < 60) {   //先判断不及格
        if(score > 30) {   //在内层再嵌套一个if语句进行进一步的判断
            printf("学习C++");
        } else{
            printf("学习Java");
        }
    }
}