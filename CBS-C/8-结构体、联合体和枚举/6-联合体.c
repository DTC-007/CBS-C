#include <stdio.h>

union Object {   //定义一个联合体类型唯一不同的就是前面的union了
    int a;
    char b;
    float c;
};

int main() {
    union Object object;
    object.a = 66;   //先给a赋值66
    printf("%d\n", object.b);   //访问b

    object.a = 128;
    printf("%d\n", object.b);

    printf("%llu", sizeof(union Object));
}