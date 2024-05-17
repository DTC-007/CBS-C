#include <stdio.h>
//void swap(int *, int*);

// 这里是两个指针类型的形参，其值为实参传入的地址，
// 虽然依然是值传递，但是这里传递的可是地址啊，
// 只要知道地址改变量还不是轻轻松松？
void swap(int * a, int * b){
    int tmp = *a;   //先暂存一下变量a地址上的值
    *a = *b;   //将变量b地址上的值赋值给变量a对应的位置
    *b = tmp;   //最后将a的值赋值给b对应位置，OK，这样就成功交换两个变量的值了
}

int main(){
    int a = 10, b = 20;
    swap(&a, &b);   //只需要把a和b的内存地址给过去就行了，这里取一下地址
    printf("a = %d, b = %d", a, b);
}