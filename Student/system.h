#include "service.h"
#include "structure.h"

#ifndef SYSTEM_H_
#define SYSTEM_H_
bool AppendOneRecord(students * stus, student new_student);
bool AppendRecords(students * stus, student * new_students, int new_student_num);
bool DeleteById(students * stus, const int id);
bool DeleteByName(students * stus, const char * name);
bool DeleteByClass(students * stus, const int Class);
bool DeleteByGradeRange(students * stus, const int lowerBoundGrade, const int upperBoundGrade);

bool ModifyOneStudent(students * stus, int index, const student * new_student);

bool QueryOneById(student * result, const students * stus, const int id);
bool QueryOneByName(student * result, const students * stus, const char * name);
bool QueryByClass(students * result, const students * stus, const int Class);

bool QueryOneByGradeRange(students result, const students * stus, const int lowerBoundGrade, const int upperBoundGrade);

bool QueryMaxGradeStudent(students result, const students * stus);
bool QueryMinGradeStudent(students result, const students * stus);
double QueryAverageGrade(const students * stus);
#endif
