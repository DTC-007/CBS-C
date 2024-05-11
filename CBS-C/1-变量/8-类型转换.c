#include <stdio.h>

void test1();   //自动类型转换
void test2();   //自动类型转换
void test3();   //转换溢出
void test4();   //整数和小数转换
void test5();   //小数转成整数
void test6();   //运算中转换
void test7();   //强制类型转换
void test8();   //算式强制类型转换
void test9();   //结果带小数的转换

int main(){
//    test1();
//    test2();
//    test3();
//    test4();
//    test5();
//    test6();
//    test7();
    test8();
//    test9();
}

void test1(){    //自动类型转换
    short s = 10;
    int i = s;  //直接将s的值传递给i即可，但是注意此时s和i的类型不同
    printf("%d\n", i);
}

void test2(){    //自动类型转换
    float f = 3;    //包括这里我们给的明明是一个int整数3但是却可以赋值给float类型，说明也是进行了自动类型转换
}

void test3(){   //转换溢出
    int a = 511;
    char b = a;   //最大127
    printf("%d\n", b);
}

void test4(){   //整数和小数转换
    int a = 99;
    double d = a;
    printf("%f\n", d);
}

void test5(){   //小数转成整数
    double a = 3.14;
    int b = a;    //这里编译器还提示了黄标，我们可以通过之后讲到的强制类型转换来处理
    printf("%d\n", b);
}

void test6(){   //运算中转换
    float a = 2;
    int b = 3;
    double c = b / a;   //  "/" 是除以的意思，也就是我们数学中的除法运算，这里表示b除以a
    printf("%f\n", c);
}

void test7(){   //强制类型转换
    int a = (int) 2.5;   //2.5是一个double类型的值，但是我们可以强制转换为int类型赋值给a，强制转换之后小数部分丢失
    printf("%d\n", a);
}

void test8(){   //算式强制类型转换
    double a = 3.14;
    int b = (int) (a + 2.8);
    //注意得括起来表示对整个算式的结果进行类型转换（括号跟数学中的挺像，也是提升优先级使用的，我们会在运算符部分详细讲解），不然强制类型转换只对其之后紧跟着的变量生效
    printf("%d\n", b);
}

void test9(){   //结果带小数的转换
    int a = 10, b = 4;
    double c = a / b;    //不进行任何的类型转换，int除以int结果仍然是int，导致小数丢失
    double d = (double) a / b;
    //对a进行强制类型转换，现在是double和int计算，根据上面自动类型转换规则，后面的int自动转换为double，结果也是double了，这样就是正确的结果了
    printf("不进行类型转换: %f, 进行类型转换: %f", c, d);
}