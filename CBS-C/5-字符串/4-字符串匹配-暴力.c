#include <stdio.h>
#include <string.h>

int main() {
    char str1[64], str2[64];
    gets(str1);
    gets(str2);
    unsigned long len1 = strlen(str1), len2 = strlen(str2);

    _Bool flag = 0;
    for (int i = 0; i < len1; ++i) {
        flag = 0;       //����str2�ĸ��ֲ�ƥ��õ���flag = 1
        for (int j = 0; j < len2; ++j) {
            if (str1[i + j] != str2[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) break;
    }
    puts(flag ? "��ƥ��" : "ƥ��");
}