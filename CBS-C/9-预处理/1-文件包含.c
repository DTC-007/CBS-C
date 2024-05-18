//函数具体实现源文件
#include <stdio.h>
#include "student.h"

void print(Student * student) {
    printf("ID: %d, 姓名: %s, 年龄: %d岁\n", student->id, student->name, student->age);
}

void modifyAge(Student * student, int newAge) {
    student->age = newAge;
}

void modifyId(Student * student, int newId) {
    student->id = newId;
}

int main() {
    Student student = {1, 18, "小明"};
    modifyId(&student,2);
    modifyAge(&student, 19);
    print(&student);   //打印
}