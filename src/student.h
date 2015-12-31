#ifndef STUDENT_H_
#define STUDENT_H_ value
typedef struct student {
    int id;
    char name[20];
    int Class;
    int grade;
} student;

typedef struct students {
    int array_size;
    int student_num;
    student * stus;
} studetns;

bool init_studetns(students ** stus);
bool init_a_student(student * stu);
bool append_a_student(students * stus, const student * new_student);
bool delete_a_student(students * stus, int index);
bool modify_a_student(students * stus, int index, const student * new_student);
bool delete_students(students ** stus);
#endif
