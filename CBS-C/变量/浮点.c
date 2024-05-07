#include <stdio.h>

int main(){
    double a = 0.5;
    float b = 2.5f;
    double c = a * b;   //注意直接写2.5默认表示的是一个double类型的值，我们需要再后面加一个f或是F表示是flaot类型值

    printf("a = %.1lf\nb = %.1lf\na * b = %.2lf", a,b,c);   //根据上表得到，小数类型需要使用%f表示，这里我们可以直接将a + b放入其中
}