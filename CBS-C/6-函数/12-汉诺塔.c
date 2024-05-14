#include <stdio.h>

void move(char start, char end, int n){   //���ڴ�ӡ�ƶ�����������̨��start����ʼ���ӣ�end�ǽ������ӣ�n����һ��Բ��
    printf("��%d��Բ�̣�%c --> %c\n", n, start, end);
}

//a���Բ�̵ĳ�ʼ���ӣ�b��Ϊ�м����Ӵ��ʹ�ã�c��ΪĿ�����ӣ�n��ʾҪ��a�ƶ���c��Բ����
void hanoi(char a, char b, char c, int n){  //�ս�����ʱ��B��Ϊ�м����ӣ�C��ΪĿ�����ӣ�Ҫ�ƶ�A�ϵ�n��Բ�̵�Cȥ
    if(n == 1) {
        move(a, c, n);   //����a,b,c��α任��ͨ���ݹ飬��󶼻���һ��n = 1�����⣬ֱ���ƶ���������
    } else {
        hanoi(a, c ,b, n - 1);  //��ҪĿ�����Ȱ�����n-1��Բ��ȫ���ŵ�Bȥ������ͱ任һ�£���B��ΪĿ�����ӣ�C��Ϊ�м�
        move(a, c, n);   //����A��ֻʣ��һ������Բ���ˣ����Ű�A���·���һ��Բ���Ƶ�Cȥ
        hanoi(b, a, c, n - 1);   //�����Ҫ��B�ϵ�ȫ���ᵽC��ȥ������Ϳ�����CΪĿ�����ӣ�AΪ�м�����
    }
}

//��
//void hanoi(char a, char b, char c, int n){
//    if(n == 0) return;
//    hanoi(a, c ,b, n - 1);
//    printf("��%d��Բ�̣�%c --> %c\n", n, a, c);
//    hanoi(b, a, c, n - 1);
//}

int main() {
    hanoi('A', 'B', 'C', 4);
}