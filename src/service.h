
#ifndef SERVERVICE_H_
#define SERVERVICE_H_
typedef struct modify_unit {
    int index;
    student stu;
} modify_unit;

bool Append(students * stus, const student new_students[], int new_student_num);
bool Delete(students * stus, bool(*filter)(student stu));
bool Modify(students * stus, modify_unit mds[], int modify_num);
bool Query(students * result, const students * stus, bool(*filter)(student stu));
#endif
