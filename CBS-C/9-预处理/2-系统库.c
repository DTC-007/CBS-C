#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ex1();   //strlen-�����ַ�����
void ex2();   //strcat-ƴ���ַ���
void ex3();   //strcpy-�����ַ���
void ex4();   //strcmp-�Ƚ��ַ���
void ex5();   //sqrt-����ƽ����
void ex6();   //pow-�˷�
void ex7();   //���Ǻ���
void ex8();   //ceil��floor
void ex9();   //fabs-�����ֵ
void ex10();   //qsort-��������
void ex11();   //��ֹ����
void ex12();   //malloc��free


int main() {
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    ex6();
    ex7();
    ex8();
    ex9();
    ex10();
    ex11();
    ex12();
}

void ex1() {    //strlen-�����ַ�����
    char * c = "Hello World!";
    printf("%llu", strlen(c));   //ʹ��strlen���㳤�ȣ�ע�ⷵ��ֵ������size_t���������ѣ������Ͼ���unsigned long��

    printf("\n\n");
}

void ex2() {    //strcat-ƴ���ַ���
    char a[20] = "Hello",* b = " World!";   //�����������ַ�������������ϣ��������ƴ�ӵ�һ��
    //ע�ⲻ������д char * a = "Hello",* b = "World!"; ���ֱ����ָ��ָ���ַ������������޷�����ƴ�ӵģ���Ϊ��С�Ѿ��̶���
    //������Ҫ������������һ����Ŀ���ַ��������ڶ����������ַ���ƴ�ӵ���һ���ַ����У�ע��Ҫװ���²��У�
    strcat(a, b);
    printf("%s", a);

    printf("\n\n");
}

void ex3() {    //strcpy-�����ַ���
    char str[10], * c = "Hello";
    strcpy(str, c);   //ʹ��cpy��ֱ�ӽ�������ַ���������ǰ����ַ��������У�ͬ����Ҫǰ��װ���²��У�
    printf("%s", str);

    printf("\n\n");
}

void ex4() {    //strcmp-�Ƚ��ַ���
    char * a = "AAA", * b = "AAB";
    int value = strcmp(a, b);   //strcmp��Ƚ������ַ����������ؽ��
    printf("%d", value);

    printf("\n\n");
}

void ex5() {    //sqrt-����ƽ����
    int a = 2;
    double d = sqrt(a);   //ʹ��sqrt��������Ǹ���������ƽ�������ײ����ţ�ٱƽ������㣩
    printf("%lf", d);

    printf("\n\n");
}

void ex6() {    //pow-�˷�
    int a = 2;
    double d = pow(a, 3);   //ʹ��pow���Կ��ټ���˷������������a��3�η�
    printf("%f", d);

    printf("\n\n");
}

void ex7() {    //���Ǻ���
    printf("%f", tan(M_PI));   //��������ʹ�����к�������tan180�ȵ�ֵ��ע��Ҫ������ǻ���ֵ
    //M_PIҲ��Ԥ�ȶ���õĦе�ֵ���ǳ���ȷ
    printf("\n\n");
}

void ex8() {    //ceil��floor
    double x = 3.14;
    printf("��С��x����С������%f\n", ceil(x));
    printf("������x�����������%f\n", floor(x));

    printf("\n\n");
}

void ex9() {    //fabs-�����ֵ
    double x = -3.14;
    printf("x�ľ���ֵ�ǣ�%f", fabs(x));

    printf("\n\n");
}

//�������
int compare(const void * a, const void * b) {  //����Ϊ�������Ƚϵ�Ԫ�أ�����ֵ������ʾa��bС��������ʾa��b��0��ʾ���
    int * x = (int *) a, * y = (int *) b;   //������Ϊ�жϵ���int������Ҫ��ǿ������ת��Ϊint *ָ��
    return *x - *y;   //��ʵֱ�ӷ���a - b�������ˣ���Ϊ���a��b��Ļ������һ������������֮ͬ��
}
void ex10() {   //qsort-��������
    int arr[] = {5, 2, 4, 0, 7, 3, 8, 1, 9, 6};
    //���߿��Ѿ�Ϊ�����ṩ���˿��������ʵ�ֺ�����ֱ���þ�����
    //�����е�࣬��һ���Ǵ��������飬�ڶ����Ǵ������������һ��ʼ�������鳤�ȣ�����������Ԫ�ش�С�����ĸ���������������ṩ����ʵ�֣�
    qsort(arr, 10, sizeof(int), compare);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

void ex11() {   //��ֹ����
//    exit(EXIT_SUCCESS);   //ֱ����ֹ�������в����Ǵ��ݸ������̵ģ�������������ֻ�Ǽ򵥳���
}

void ex12() {   //malloc��free
    int * p = (int *) malloc(sizeof(int));   //���ǿ���ʹ��malloc��������̬����һ���ڴ�ռ�
    //�����᷵�����뵽���ڴ�ռ���׵�ַ(���)
    *p = 128;
    printf("%d", *p);

    free(p);   //ʹ��free�������ڴ�ռ�����ͷţ��黹��ϵͳ����������ڴ��ֿ��Ա�ϵͳ�������������
    p = NULL;   //ָ��Ҳ������ָ���Ǹ���ַ�ˣ���Ϊ���Ѿ����ͷ���
}

