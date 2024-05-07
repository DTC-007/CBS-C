#include <stdio.h>

int main() {
    char c = 127;    //已经到达c的最大值了
    c = c + 1;   //我不管，我就要再加
    printf("%d", c);    //这时会得到什么结果？
}