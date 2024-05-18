#include <stdio.h>

struct Student {
    int id;
    int age;
    char * name;
};

//直接修改值
void test1(struct Student student){
    student.age = 19;   //我们对传入的结构体中的年龄进行修改
}
//传递指针修改
void test2(struct Student * student){   //这里使用指针，那么现在就可以指向外部的结构体了
    student->age = 19;   //别忘了指针怎么访问结构体内部数据的
}

int main() {
    struct Student student = {1, 18, "小明"};

    //直接修改值
    test1(student);
    printf("%d\n", student.age);  //最后会是修改后的值吗？
    //传递指针修改
    test2(&student);   //传递结构体的地址过去
    printf("%d", student.age);

}