#include <stdio.h>

#define PI 3.1415926
#define M a + b
#define lbwnb long
#define MUL(x) x * x
#define bb1(i) printf("���Ǻ��滻�ģ�%d", i);
#define bb2(str) printf("���Ǻ��滻�ģ�"#str"<");  //ʹ��#ֱ�����ַ����н��к��滻������Ĭ������»ᱻ����һ���ַ�
#define TEST(n) x ##n   //##��ʹ�ò�������ƴ��

int main() {
    printf("�е�ֵΪ��%f\n", PI);   //����ʹ�ñ���һ�������ǿ���ֱ�ӽ�PI�ŵ����λ��

    int a = 10, b = 20;
    printf("%d\n", M * a);   //��λ���ü��������Ƕ����أ�

    lbwnb ex = 10L;

    printf("%d\n", MUL(9));

    bb1(666);
    printf("\n\n");

    bb2("�㿴�ⲻ���滻����");
    printf("\n\n");

    int TEST(1) = 10;   //���ﴫ��1����ôʵ���Ͼ��Ǳ��滻Ϊx1
    x1 = 20;   //����������ʵ��int x1 = 10

}