#include <stdio.h>

struct Student {
    int id;
    int age;
    char * name;
};

//ֱ���޸�ֵ
void test1(struct Student student){
    student.age = 19;   //���ǶԴ���Ľṹ���е���������޸�
}
//����ָ���޸�
void test2(struct Student * student){   //����ʹ��ָ�룬��ô���ھͿ���ָ���ⲿ�Ľṹ����
    student->age = 19;   //������ָ����ô���ʽṹ���ڲ����ݵ�
}

int main() {
    struct Student student = {1, 18, "С��"};

    //ֱ���޸�ֵ
    test1(student);
    printf("%d\n", student.age);  //�������޸ĺ��ֵ��
    //����ָ���޸�
    test2(&student);   //���ݽṹ��ĵ�ַ��ȥ
    printf("%d", student.age);

}