#include <stdio.h>

void ex1();   //ͨ���÷�
void ex2();   //��default
void ex3();   //Ƕ��if


int main() {
    ex1();
    ex2();
    ex3();
}

void ex1(){     //ͨ���÷�
    char c = 'A';
    switch (c) {  //����Ŀ����Ǳ���c
        case 'A':    //�ֱ�ָ��ABC����ƥ��ֵ������ִ�в�ͬ�Ĵ���
            printf("ȥ���Ӱ࣡׼�����985��ѧ��");
            break;   //ִ����֮��һ���ǵ�break��������������ִ����һ��case�еĴ���
        case 'B':
            printf("ȥƽ�а࣡׼�����һ����");
            break;
        case 'C':
            printf("ȥְ�����졣");
            break;
    }
    printf("\n\n");
}

void ex2(){     //��default
    char c = 'A';
    switch (c) {
        case 'A':
            printf("ȥ���Ӱ࣡");
            break;
        case 'B':
            printf("ȥƽ�а࣡");
            break;
        case 'C':
            printf("ȥ�����࣡");
            break;
        default:   //�������һ�ɾ�������Ĵ�����
            printf("ȥ��ְ�ߣ�����");
    }
    printf("\n\n");
}

void ex3(){     //Ƕ��if
    char c = 'A';
    switch (c) {
        case 'A':
            if(c == 'A') {    //Ƕ��һ��if���
                printf("ȥ���Ӱ࣡");
            }
            break;
        case 'B':
            printf("ȥƽ�а࣡");
            break;
    }
}