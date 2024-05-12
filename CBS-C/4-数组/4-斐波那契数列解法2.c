#include <stdio.h>

int main() {
    int target = 7;

    int fib[target];
    fib[1] = fib[0] = 1;
    for (int i = 2; i < target; ++i) {
        fib[i] = fib[i-2] + fib[i-1];
    }

    printf("%d", fib[target-1]);
}