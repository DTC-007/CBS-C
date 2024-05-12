#include <stdio.h>

int main() {
    int target = 7, result;  //target是要获取的数，result是结果

    int a = 1, b = 1, c = 0;
    for (int i = 2; i < target; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    result = c;

    printf("%d", result);
}