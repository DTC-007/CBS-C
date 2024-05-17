#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main(){
    int (*p)(int, int) = sum;

    int result1 = (*p)(1, 2);   //就像我们正常使用函数那样，(*p)表示这个函数，后面依然是在小括号里面填上实参
    int result2 = p(1, 2);  //当然也可以直接写函数指针变量名称，效果一样（咋感觉就是给函数换了个名呢）
    printf("%d, %d", result1, result2);
}