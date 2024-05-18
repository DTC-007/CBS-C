#include <stdio.h>

enum status {low = 1, middle = 2, high = 3};

int main() {
    enum status a = high;   //和之前一样，直接定义即可，类型为enum + 枚举名称，后面是变量名称，值可以直接写对应的枚举
    printf("%d\n", a);
    if(a == low) {   //判断起来就方便多了
        printf("低档位");
    } else if (a == high){
        printf("高档位");
    } else {
        printf("中档位");
    }
}