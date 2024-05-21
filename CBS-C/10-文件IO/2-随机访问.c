#include <stdio.h>

void ex1();   //fseek和ftell
void ex2();   //fgetpos和fsetpos
void ex3();   //复制文件内容
void ex4();   //拷贝大型文件

int main() {
    ex1();
    ex2();
    ex3();
//    ex4();
}

void ex1() {    //fseek和ftell
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-文件IO\\hello.txt", "r");
    if(file != NULL) {
        fseek(file, 2L, SEEK_CUR);   //第二个参数为偏移量，取决于第三个参数的位置
        printf("%ld", ftell(file));  //可以使用ftell来直接返回当前位置，返回类型为long
        fclose(file);
    }
    printf("\n\n");
}

void ex2() {    //fgetpos和fsetpos
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-文件IO\\hello.txt", "r");
    if(file != NULL) {
        fpos_t pos;   //位置需要使用fpos_t进行存储（主要用于处理大文件）
        fgetpos(file, &pos);   //获取位置，并设定给pos，此时位置为0
        fseek(file, -2L, SEEK_END);   //通过fseek移动到倒数第二个位置
        fsetpos(file, &pos);   //设定位置为pos位置
        printf("%ld", ftell(file));   //最后得到的就是经过fsetpos设定的新位置了
        fclose(file);
    }
    printf("\n\n");
}

void ex3() {    //复制文件内容
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-文件IO\\hello.txt", "r");
    FILE * target = fopen("D:\\Study\\ClionPros\\CBS-C\\10-文件IO\\hello2.txt", "w");
    if(file != NULL) {
        char buf[1024];   //这里我们使用char类型的数组作为暂存
        size_t s;
        while ((s = fread(buf, sizeof(char), 1024, file)) > 0) {  //使用fread函数进行读取，每次都会从文件中读取指定大小的数据到暂存数组中，返回值为实际读取的值，如果读取的值小于0表示读完了
            fwrite(buf, sizeof(char), s, target);  //使用fwrite将数据写入到指定文件中
        }
        fclose(file);
    }
}

void ex4() {    //拷贝大型文件
    FILE * file = fopen("22000.318.211104-1236.co_release_svc_refresh_CLIENTCONSUMER_RET_A64FRE_zh-cn.iso", "r");
    FILE * target = fopen("22000.318.211104-1236.co_release_svc_refresh_CLIENTCONSUMER_RET_A64FRE_zh-cn-2.iso", "w");

    if(file != NULL) {
        //计算文件的大小
        fseek(file, 0L, SEEK_END);
        long size = ftell(file);
        fseek(file, 0L, SEEK_SET);

        char buf[1024 * 1024];
        size_t s, all = 0;
        while ((s = fread(buf, sizeof(char), 1024, file)) > 0) {
            fwrite(buf, sizeof(char), s, target);
            all += s;
            printf("当前进度 %.1f%%\n", (double) all / (double) size * 100);
        }
        fclose(file);
    }
}