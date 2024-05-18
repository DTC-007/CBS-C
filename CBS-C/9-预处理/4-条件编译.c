#include <stdio.h>
//#define PI 3.1415

//条件语句
#ifdef PI   //ifdef用于判断是否定义了符号PI，如果已定义的话则处理以下指令
    #define M 666
#else   //如果没定义符号PI，那么就处理这个分支的语句
    #define M 777
#endif  //最后需要以endif指令结束整个判断

//#ifndef PI   //ifndef 就是 if not define，跟ifdef反着的
//    #define M 666
//#else
//    #define M 777
//#endif

//逻辑判断
#if M == 666   //若M等于666那么定义K = 999
    #define K 999
#elif M == 777   //等同于else if语句
    #define K 888
#else    //else语句
    #define K 000
#endif

int main() {
    printf("%d\n", M);   //最后打印M
    printf("%d", K);
}