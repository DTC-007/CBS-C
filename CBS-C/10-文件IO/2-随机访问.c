#include <stdio.h>

void ex1();   //fseek��ftell
void ex2();   //fgetpos��fsetpos
void ex3();   //�����ļ�����
void ex4();   //���������ļ�

int main() {
    ex1();
    ex2();
    ex3();
//    ex4();
}

void ex1() {    //fseek��ftell
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-�ļ�IO\\hello.txt", "r");
    if(file != NULL) {
        fseek(file, 2L, SEEK_CUR);   //�ڶ�������Ϊƫ������ȡ���ڵ�����������λ��
        printf("%ld", ftell(file));  //����ʹ��ftell��ֱ�ӷ��ص�ǰλ�ã���������Ϊlong
        fclose(file);
    }
    printf("\n\n");
}

void ex2() {    //fgetpos��fsetpos
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-�ļ�IO\\hello.txt", "r");
    if(file != NULL) {
        fpos_t pos;   //λ����Ҫʹ��fpos_t���д洢����Ҫ���ڴ�����ļ���
        fgetpos(file, &pos);   //��ȡλ�ã����趨��pos����ʱλ��Ϊ0
        fseek(file, -2L, SEEK_END);   //ͨ��fseek�ƶ��������ڶ���λ��
        fsetpos(file, &pos);   //�趨λ��Ϊposλ��
        printf("%ld", ftell(file));   //���õ��ľ��Ǿ���fsetpos�趨����λ����
        fclose(file);
    }
    printf("\n\n");
}

void ex3() {    //�����ļ�����
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-�ļ�IO\\hello.txt", "r");
    FILE * target = fopen("D:\\Study\\ClionPros\\CBS-C\\10-�ļ�IO\\hello2.txt", "w");
    if(file != NULL) {
        char buf[1024];   //��������ʹ��char���͵�������Ϊ�ݴ�
        size_t s;
        while ((s = fread(buf, sizeof(char), 1024, file)) > 0) {  //ʹ��fread�������ж�ȡ��ÿ�ζ�����ļ��ж�ȡָ����С�����ݵ��ݴ������У�����ֵΪʵ�ʶ�ȡ��ֵ�������ȡ��ֵС��0��ʾ������
            fwrite(buf, sizeof(char), s, target);  //ʹ��fwrite������д�뵽ָ���ļ���
        }
        fclose(file);
    }
}

void ex4() {    //���������ļ�
    FILE * file = fopen("22000.318.211104-1236.co_release_svc_refresh_CLIENTCONSUMER_RET_A64FRE_zh-cn.iso", "r");
    FILE * target = fopen("22000.318.211104-1236.co_release_svc_refresh_CLIENTCONSUMER_RET_A64FRE_zh-cn-2.iso", "w");

    if(file != NULL) {
        //�����ļ��Ĵ�С
        fseek(file, 0L, SEEK_END);
        long size = ftell(file);
        fseek(file, 0L, SEEK_SET);

        char buf[1024 * 1024];
        size_t s, all = 0;
        while ((s = fread(buf, sizeof(char), 1024, file)) > 0) {
            fwrite(buf, sizeof(char), s, target);
            all += s;
            printf("��ǰ���� %.1f%%\n", (double) all / (double) size * 100);
        }
        fclose(file);
    }
}