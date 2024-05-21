#include <stdio.h>

void ex1();   //读文件
void ex2();   //写文件
void ex3();   //追加模式
void ex4();   //缓冲区

int main() {
//    ex1();
//    ex2();
//    ex3();
    ex4();
}

void ex1() {    //读文件
    FILE *file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-文件IO\\hello.txt", "r");
    if(file != NULL) {  //如果打开失败会返回NULL
        int c;
        while ((c = getc(file)) != EOF) {   //通过一个while循环来不断读取文件，使用getc从文件中读取一个字符，如果到末尾了，那么会返回一个特殊值EOF
            putchar(c);   //使用putchar来快速打印字符到控制台
        }
        fclose(file);   //fclose用于关闭文件
    } else{
        puts("文件打开失败！");
    }
    printf("\n\n");
}

void ex2() {    //写文件
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-文件IO\\write.txt", "w");   //注意这里需要修改为写模式
    if(file != NULL) {
        for (int i = 0; i < 10; ++i)
            putc('A' + i, file);   //从A开始依次写入10个字符
        fclose(file);
        printf("文件写入成功！");
    } else{
        puts("文件打开失败！");
    }
    printf("\n\n");
}

void ex3() {    //追加模式
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-文件IO\\write.txt", "a");   //我们可以将其修改为a表示append追加输入
    if(file != NULL) {
        for (int i = 0; i < 10; ++i)
            putc('A' + i, file);   //从A开始依次写入10个字符
        fclose(file);
        printf("文件写入成功！");
    } else{
        puts("文件打开失败！");
    }
    printf("\n\n");
}

void ex4() {    //缓冲区
    FILE * file = fopen("D:\\Study\\ClionPros\\CBS-C\\10-文件IO\\a+.txt", "a+");   //注意这里需要修改为追加模式
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