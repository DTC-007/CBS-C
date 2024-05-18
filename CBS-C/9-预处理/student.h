struct stu {   //学生结构体定义
    int id;
    int age;
    char name[20];
} typedef Student;

void print(Student * student);   //打印学生信息
void modifyAge(Student * student, int newAge);   //修改年龄
void modifyId(Student * student, int newId);   //修改学号