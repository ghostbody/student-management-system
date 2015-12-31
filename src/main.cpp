#include <stdio.h>
#include <malloc.h>
#include <string.h>

bool traversal(students * stus) {
    int i;
    for(i = 0; i < stus->student_num; i++) {
        printf("%s %d %d %d\n", stus->stus[i].name, stus->stus[i].id,
                                stus->stus[i].Class, stus->stus[i].grade);
    }
    return true;
}


int main() {
    students * stu = NULL;
    init_studetns(&stu);
    ReadFromFile(stu);
    // student s;
    // s.id = 13331314;
    // strcpy(s.name, "yejq8");
    // s.Class = 8;
    // s.grade = 100;
    // int i;
    // for(i = 0; i < 100; i++) {
    //     s.id++;
    //     append_a_student(stu, &s);
    // }
    //
    // for(i = 99; i >= 0; i--) {
    //     s.Class++;
    //     modify_a_student(stu, i, &s);
    // }
    //
    // printf("%d\n", stu->student_num);
    traversal(stu);
    delete_students(stu);
}
