#include <stdio.h>

struct Object {
    char a;   //char占据1个字节
    int b;   //int占据4个字节，因为前面存了一个char，按理说应该从第2个字节开始存放，但是根据规则一，必须在自己的整数倍位置上存放，所以2不是4的整数倍位置，这时离1最近的下一个整数倍地址就是4了，所以前面空3个字节的位置出来，然后再放置
    short c; //前面存完int之后，就是从8开始了，刚好满足short（2字节）的整数倍，但是根据规则二，整个结构体大小必须是最大对齐大小的整数倍（这里最大对齐大小是int，所以是4），存完short之后，只有10个字节，所以屁股后面再补两个空字节，这样就可以了
};


int main() {
    //计算数据类型
    printf("int类型的大小是：%llu\n", sizeof(int));  //sizeof能够计算数据在内存中所占据的空间大小（字节为单位）
    //计算变量值
    int arr[10];
    printf("int arr[10]占据的大小是：%llu\n", sizeof (arr)); //在判断非类型时，sizeof 括号可省
    //计算结构体
    printf("%llu", sizeof(struct Object));   //直接填入struct Object作为类型
}