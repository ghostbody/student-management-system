#include "structure.h"
#include "system.h"
#include <string.h>

bool AppendOneRecord(students * stus, student new_student) {
    return Append(stus, &new_student, 1);
}

bool AppendRecords(students * stus, student * new_students, int new_student_num) {
    return Append(stus, new_students, new_student_num);
}

static bool IdFilter(student stu, student * standar) {
    if(stu.id == (*standar).id) {
        return true;
    } else {
        return false;
    }
}

bool DeleteById(students * stus, const int id) {
    student standar;
    standar.id = id;
    return Delete(stus, IdFilter, &standar);
}

static bool nameFilter(student stu, student * standar) {
    if(strcmp((*standar).name, stu.name) == 0) {
        return true;
    } else {
        return false;
    }
}

bool DeleteByName(students * stus, const char * name) {
    student standar;
    strcpy(standar.name, name);
    return Delete(stus, nameFilter, &standar);
}

static bool classFilter(student stu, student * standar) {
    if(stu.Class == (*standar).Class) {
        return true;
    } else {
        return false;
    }
}

bool DeleteByClass(students * stus, const int Class) {
    student standar;
    standar.Class = Class;
    return Delete(stus, classFilter, &standar);
}

static bool gradeRangeFilter(student stu, student * standar) {
    if(stu.grade >= standar[0].grade && stu.grade <= standar[1].grade) {
        return true;
    } else {
        return false;
    }
}

bool DeleteByGradeRange(students * stus, const int lowerBoundGrade, const int upperBoundGrade) {
    student standar[2];
    standar[0].grade = lowerBoundGrade;
    standar[1].grade = upperBoundGrade;
    return Delete(stus, gradeRangeFilter, standar);
}

bool ModifyOneStudent(students * stus, int index, const student * new_student) {
    return Modify(stus, index, new_students);
}


bool QueryOneById(student * result, const students * stus, const int id);

bool QueryOneByName(student * result, const students * stus, const char * name);

bool QueryByClass(students * result, const students * stus, const int Class);

bool QueryOneByGradeRange(students result, const students * stus, const int lowerBoundGrade, const int upperBoundGrade);

bool QueryMaxGradeStudent(students result, const students * stus);

bool QueryMinGradeStudent(students result, const students * stus);

double QueryAverageGrade(const students * stus);
