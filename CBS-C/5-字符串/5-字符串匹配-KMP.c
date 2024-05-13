#include <stdio.h>
#include <string.h>

int main() {    //***
    char str1[64], str2[64];
    gets(str1); //abababcabb
    gets(str2); //ababc

    int len1 = strlen(str1), len2 = strlen(str2);
    int next[len2];
    next[0] = 0;

    for (int i = 1; i < len2; ++i) {
        int j = i - 1;
        while (1) {
            if (next[j] == 0 || str2[i - 1] == str2[next[j] - 1]) {
                next[i] = next[j] + 1;
                break;
            }
            j = next[j] - 1;
        }
    }

    for (int i = 0; i < len2; ++i) {
        printf("%d", next[i]);
    }
    printf("\n");

    int i = 0, j = 0;
    while (i < len1) {
        if (str1[i] == str2[j]) {   //字符相等就都往后面推着走
            i++;
            j++;
        } else {
            if (j == 0) {   //子串第一个字符就不相等
                i++;        //母串从下一个字符开始比较
            } else {
                j = next[j] - 1;
            }
        }
        if (j == len2) break;
    }

    printf(j == len2 ? "匹配" : "不匹配");
}