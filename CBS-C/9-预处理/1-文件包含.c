//��������ʵ��Դ�ļ�
#include <stdio.h>
#include "student.h"

void print(Student * student) {
    printf("ID: %d, ����: %s, ����: %d��\n", student->id, student->name, student->age);
}

void modifyAge(Student * student, int newAge) {
    student->age = newAge;
}

void modifyId(Student * student, int newId) {
    student->id = newId;
}

int main() {
    Student student = {1, 18, "С��"};
    modifyId(&student,2);
    modifyAge(&student, 19);
    print(&student);   //��ӡ
}