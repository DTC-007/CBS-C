#include <stdio.h>

struct Student {
    int id;
    int age;
    char * name;
};

int main() {
    struct Student student = {1, 18, "С��"};
    struct Student * p = &student;   //ͬ���ģ����ͺ������*����һ���ṹ�����͵�ָ����

//    printf("%s", (*p).name);  //����.��������ȼ����ߣ�������Ҫ��ʹ��*p�õ���ַ�ϵ�ֵ��Ȼ����ȥ���ʶ�Ӧ����
    printf("%s", p->name);   //ʹ�� -> ����������ٽ�ָ����ָ�ṹ��Ķ�Ӧ����ȡ��
}