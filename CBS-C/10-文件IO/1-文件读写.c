#include <stdio.h>

void ex1();   //���ļ�
void ex2();   //д�ļ�
void ex3();   //׷��ģʽ
void ex4();   //������

int main() {
//    ex1();
//    ex2();
//    ex3();
    ex4();
}

void ex1() {    //���ļ�
    FILE *file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-�ļ�IO\\hello.txt", "r");
    if(file != NULL) {  //�����ʧ�ܻ᷵��NULL
        int c;
        while ((c = getc(file)) != EOF) {   //ͨ��һ��whileѭ�������϶�ȡ�ļ���ʹ��getc���ļ��ж�ȡһ���ַ��������ĩβ�ˣ���ô�᷵��һ������ֵEOF
            putchar(c);   //ʹ��putchar�����ٴ�ӡ�ַ�������̨
        }
        fclose(file);   //fclose���ڹر��ļ�
    } else{
        puts("�ļ���ʧ�ܣ�");
    }
    printf("\n\n");
}

void ex2() {    //д�ļ�
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-�ļ�IO\\write.txt", "w");   //ע��������Ҫ�޸�Ϊдģʽ
    if(file != NULL) {
        for (int i = 0; i < 10; ++i)
            putc('A' + i, file);   //��A��ʼ����д��10���ַ�
        fclose(file);
        printf("�ļ�д��ɹ���");
    } else{
        puts("�ļ���ʧ�ܣ�");
    }
    printf("\n\n");
}

void ex3() {    //׷��ģʽ
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-�ļ�IO\\write.txt", "a");   //���ǿ��Խ����޸�Ϊa��ʾappend׷������
    if(file != NULL) {
        for (int i = 0; i < 10; ++i)
            putc('A' + i, file);   //��A��ʼ����д��10���ַ�
        fclose(file);
        printf("�ļ�д��ɹ���");
    } else{
        puts("�ļ���ʧ�ܣ�");
    }
    printf("\n\n");
}

void ex4() {    //������
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-�ļ�IO\\a+.txt", "a+");   //ע��������Ҫ�޸�Ϊ׷��ģʽ
    char buf[3];
    setvbuf(file, buf, _IONBF, 1);
    if(file != NULL) {
        while (1) {
            int c = getchar();
            if(c == 'q') break;
            putc(c, file);

        }
        fclose(file);
    }
}