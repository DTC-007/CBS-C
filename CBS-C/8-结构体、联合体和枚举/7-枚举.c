#include <stdio.h>

enum status {low = 1, middle = 2, high = 3};

int main() {
    enum status a = high;   //��֮ǰһ����ֱ�Ӷ��弴�ɣ�����Ϊenum + ö�����ƣ������Ǳ������ƣ�ֵ����ֱ��д��Ӧ��ö��
    printf("%d\n", a);
    if(a == low) {   //�ж������ͷ������
        printf("�͵�λ");
    } else if (a == high){
        printf("�ߵ�λ");
    } else {
        printf("�е�λ");
    }
}