#include <stdio.h>

void ex1();   //�����ж�
void ex2();   //���else
void ex3();   //����Ƕ��


int main() {
    ex1();
    ex2();
    ex3();
}

void ex1(){     //�����ж�
    int i = 0;
    if(i > 20) {
        printf("Hello World!");  //����if������ִ��
    } else {
        printf("LBWNB");   //������if������ִ��
    }
    printf("\n\n");
}

void ex2(){     //���else
    int score = 2;
    if(score >= 90) {
        printf("����");
    } else if (score >= 70) {
        printf("����");
    } else if (score >= 60){
        printf("����");
    } else{
        printf("������");
    }
    printf("\n\n");
}

void ex3(){     //����Ƕ��
    int score =  2;
    if(score < 60) {   //���жϲ�����
        if(score > 30) {   //���ڲ���Ƕ��һ��if�����н�һ�����ж�
            printf("ѧϰC++");
        } else{
            printf("ѧϰJava");
        }
    }
}