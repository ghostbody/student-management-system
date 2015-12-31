
#ifndef SERVERVICE_H_
#define SERVERVICE_H_
#include "structure.h"
bool Append(students * stus, const student * new_students, int new_student_num);
bool Delete(students * stus, bool(*filter)(student stu, student * standar), student * standar);
bool Modify(students * stus, int index, const student * new_student);
bool Query(students * result, const students * stus, bool(*filter)(student stu));
#endif
