#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ex1();   //strlen-计算字符长度
void ex2();   //strcat-拼接字符串
void ex3();   //strcpy-复制字符串
void ex4();   //strcmp-比较字符串
void ex5();   //sqrt-算术平方根
void ex6();   //pow-乘方
void ex7();   //三角函数
void ex8();   //ceil和floor
void ex9();   //fabs-求绝对值
void ex10();   //qsort-快速排序
void ex11();   //终止程序
void ex12();   //malloc和free


int main() {
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    ex6();
    ex7();
    ex8();
    ex9();
    ex10();
    ex11();
    ex12();
}

void ex1() {    //strlen-计算字符长度
    char * c = "Hello World!";
    printf("%llu", strlen(c));   //使用strlen计算长度，注意返回值类型是size_t（别名而已，本质上就是unsigned long）

    printf("\n\n");
}

void ex2() {    //strcat-拼接字符串
    char a[20] = "Hello",* b = " World!";   //现在有两个字符串，但是我们希望把他们拼接到一起
    //注意不能这样写 char * a = "Hello",* b = "World!"; 如果直接用指针指向字符串常量，是无法进行拼接的，因为大小已经固定了
    //这里需要两个参数，第一个是目标字符串，将第二个参数的字符串拼接到第一个字符串中（注意要装得下才行）
    strcat(a, b);
    printf("%s", a);

    printf("\n\n");
}

void ex3() {    //strcpy-复制字符串
    char str[10], * c = "Hello";
    strcpy(str, c);   //使用cpy会直接将后面的字符串拷贝到前面的字符串数组中（同样需要前面装得下才行）
    printf("%s", str);

    printf("\n\n");
}

void ex4() {    //strcmp-比较字符串
    char * a = "AAA", * b = "AAB";
    int value = strcmp(a, b);   //strcmp会比较两个字符串，并返回结果
    printf("%d", value);

    printf("\n\n");
}

void ex5() {    //sqrt-算术平方根
    int a = 2;
    double d = sqrt(a);   //使用sqrt可以求出非负数的算术平方根（底层采用牛顿逼近法计算）
    printf("%lf", d);

    printf("\n\n");
}

void ex6() {    //pow-乘方
    int a = 2;
    double d = pow(a, 3);   //使用pow可以快速计算乘方，这里求的是a的3次方
    printf("%f", d);

    printf("\n\n");
}

void ex7() {    //三角函数
    printf("%f", tan(M_PI));   //这里我们使用正切函数计算tan180度的值，注意要填入的是弧度值
    //M_PI也是预先定义好的π的值，非常精确
    printf("\n\n");
}

void ex8() {    //ceil和floor
    double x = 3.14;
    printf("不小于x的最小整数：%f\n", ceil(x));
    printf("不大于x的最大整数：%f\n", floor(x));

    printf("\n\n");
}

void ex9() {    //fabs-求绝对值
    double x = -3.14;
    printf("x的绝对值是：%f", fabs(x));

    printf("\n\n");
}

//排序规则
int compare(const void * a, const void * b) {  //参数为两个待比较的元素，返回值负数表示a比b小，正数表示a比b大，0表示相等
    int * x = (int *) a, * y = (int *) b;   //这里因为判断的是int所以需要先强制类型转换为int *指针
    return *x - *y;   //其实直接返回a - b就完事了，因为如果a比b大的话算出来一定是正数，反之同理
}
void ex10() {   //qsort-快速排序
    int arr[] = {5, 2, 4, 0, 7, 3, 8, 1, 9, 6};
    //工具库已经为我们提供好了快速排序的实现函数，直接用就完事
    //参数有点多，第一个是待排序数组，第二个是待排序的数量（一开始就是数组长度），第三个是元素大小，第四个是排序规则（我们提供函数实现）
    qsort(arr, 10, sizeof(int), compare);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

void ex11() {   //终止程序
//    exit(EXIT_SUCCESS);   //直接终止程序，其中参数是传递给父进程的（但是现在我们只是简单程序）
}

void ex12() {   //malloc和free
    int * p = (int *) malloc(sizeof(int));   //我们可以使用malloc函数来动态申请一段内存空间
    //申请后会返回申请到的内存空间的首地址(随机)
    *p = 128;
    printf("%d", *p);

    free(p);   //使用free函数对内存空间进行释放，归还给系统，这样这段内存又可以被系统分配给别人用了
    p = NULL;   //指针也不能再指向那个地址了，因为它已经被释放了
}

