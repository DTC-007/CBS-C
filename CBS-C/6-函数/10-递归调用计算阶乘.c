#include <stdio.h>

int test(int n);

int main() {
    printf("%d", test(3));
}

int test(int n){
    if(n == 1) return 1;   //因为不能无限制递归下去，所以我们这里添加一个结束条件，在n = 1时返回
    return test(n - 1) * n;  //每次都让n乘以其下一级的计算结果，下一级就是n-1了
}