#include <stdio.h>
#include <string.h>

int main() {
    char str[64];
    gets(str);
    unsigned long len = strlen(str), left = 0, right = len - 1;

    _Bool flag = 1;
    while (left < right) {
        if (str[left] != str[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    printf(flag ? "是回文串" : "不是回文串");
}