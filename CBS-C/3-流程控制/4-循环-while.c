#include <stdio.h>

void ex1();   //ͨ���÷�
void ex2();   //�ؼ���ʹ��
void ex3();   //do-while


int main() {
    ex1();
    ex2();
    ex3();
}

void ex1(){     //ͨ���÷�
    int i = 100;   //�������������뿴��i���ϳ���2�õ��Ľ������ʲô������ѭ���������ǲ�����ȷ
    while (i > 0) {   //����Ψһ֪������ѭ��������ֻҪ����0��ô�Ϳ��Լ�����
        printf("%d, ", i);
        i /= 2;   //ÿ��ѭ��������2
    }
    printf("\n\n");
}

void ex2(){     //�ؼ���ʹ��
    int i = 100;
    while (i > 0) {
        if(i < 30) break;
        printf("%d, ", i);
        i /= 2;
    }
    printf("\n\n");
}

void ex3(){     //do-while
    do {  //������������ѭ����������ִ��ѭ�������������
        printf("Hello World!");
    } while (0);   //�����жϣ�����жϳɹ���������һ��ѭ�����������
}