#include <stdio.h>

int sum(int ,int );   //现在我们要返回a和b的和（那么肯定也是int类型）所以这里需要将返回值类型修改为int

int main() {
    int a = 10, b = 20;   //计算a和b的和
    int result = sum(a, b);   //函数执行后，会返回一个int类型的结果，我们可以接收它，也可以像下面一样直接打印，当然也可以参与运算等等。
    printf("a+b=%d", sum(a, b));
}

int sum(int a, int b) {
    return a + b;   //通过return关键字来返回计算的结果
}