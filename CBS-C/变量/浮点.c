#include <stdio.h>

int main(){
    double a = 0.5;
    float b = 2.5f;
    double c = a * b;   //ע��ֱ��д2.5Ĭ�ϱ�ʾ����һ��double���͵�ֵ��������Ҫ�ٺ����һ��f����F��ʾ��flaot����ֵ

    printf("a = %.1lf\nb = %.1lf\na * b = %.2lf", a,b,c);   //�����ϱ�õ���С��������Ҫʹ��%f��ʾ���������ǿ���ֱ�ӽ�a + b��������
}