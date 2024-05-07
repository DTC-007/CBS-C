#include <stdio.h>

void ex1();   //判断正负
void ex2();   //判断是否为大写字母
void ex3();   //更好地判断是否为大写字母
void ex4();   //判断是否不是大写字母
void ex5();   //判断是否为某个字母
void ex6();   //对结果取反
void ex7();   //三目运算符

int main(){
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    ex6();
    ex7();
}

void ex1(){    //判断正负
    int a = 10;
    _Bool c = a < 0;    //我们现在想要判断a的值是否小于0，我们可以直接使用小于符号进行判断，最后得到的结果只能是1或0
  	//虽然结果是一个整数，但是这里推荐使用_Bool类型进行接收，它只能表示0和1（更加专业一些）
    printf("c = %d\n\n", c);
}

void ex2(){    //判断是否为大写字母
    char c = 'D';
    printf("c是否为大写字母：%d\n\n", c >= 'A');    //由于底层存储的就是ASCII码，这里可以比较ASCII码，也可以写成字符的形式
}

void ex3(){    //更好地判断是否为大写字母
    char c = 'D';
    printf("c是否为大写字母：%d\n\n", c >= 'A' && c <= 'Z');   //使用&&表示逻辑与，逻辑与要求两边都是真，结果才是真
}

void ex4(){    //判断是否不是大写字母
    char c = 'D';
    printf("c是否不为大写字母：%d\n\n", c < 'A' || c > 'Z');   //使用||表示逻辑或，只要两边其中一个为真或是都为真，结果就是真
}

void ex5(){    //判断是否为某个字母
    char c = 'D';
    printf("c是否为字母A：%d\n\n", c == 'A');    //注意判断相等时使用==双等号
//    printf("c是否不为字母A：%d", c != 'A');
}

void ex6(){    //对结果取反
    int i = 20;
    printf("i是否不小于20：%d\n\n", !(i < 20));   //使用!来对结果取反，注意!优先级很高，一定要括起来，不然会直接对i生效
}

void ex7(){    //三目运算符
    int i = 0;
    char c = i > 10 ? 'A' : 'B';    //三目运算符格式为：expression ? 值1 : 值2，返回的结果会根据前面判断的结果来的
    //这里是判断i是否大于10，如果大于那么c的值就是A，否则就是B
  	printf("%d", c);
}