#include <stdio.h>

void solution1();
void solution2();

int main(){
    solution1();
}

void solution1(){
    for (int i = 1; i < 10; ++i) {
        for(int j = 1; j < i+1; ++j){
            int res = i * j;
            printf("%d x %d = %-2d  ", j, i, res);  //%-2d意为字符占两位居左显示
        }
        printf("\n");
    }
}

void solution2(){
    for (int i = 1; i < 10; ++i) {
        for(int j = 1; j < 10; ++j){
            if(i < j) break;
            printf("%d x %d = %-2d  ", j, i, i * j);  //%-2d意为字符占两位居左显示
        }
        printf("\n");
    }
}