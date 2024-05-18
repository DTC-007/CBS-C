#include <stdio.h>

#define PI 3.1415926
#define M a + b
#define lbwnb long
#define MUL(x) x * x
#define bb1(i) printf("我是宏替换的：%d", i);
#define bb2(str) printf("我是宏替换的："#str"<");  //使用#直接在字符串中进行宏替换，否则默认情况下会被当做一个字符
#define TEST(n) x ##n   //##会使用参数进行拼接

int main() {
    printf("π的值为：%f\n", PI);   //就像使用变量一样，我们可以直接将PI放到这个位置

    int a = 10, b = 20;
    printf("%d\n", M * a);   //各位觉得计算结果会是多少呢？

    lbwnb ex = 10L;

    printf("%d\n", MUL(9));

    bb1(666);
    printf("\n\n");

    bb2("你看这不就替换了吗");
    printf("\n\n");

    int TEST(1) = 10;   //这里传入1，那么实际上就是被替换为x1
    x1 = 20;   //所以上面其实是int x1 = 10

}