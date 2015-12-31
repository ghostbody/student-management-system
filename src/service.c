#include "student.h"
#include "service.h"

bool Append(students * stus, const student new_students[], int new_student_num) {
    int i;
    for(i = 0; i < new_student_num; i++) {
        if(!append_a_student(stus, &new_students[i])) {
            return false;
        }
    }
    return true;
}

bool Delete(students * stus, bool(*filter)(student stu)) {
    int i;
    for(i =0; i < stus->student_num; i++) {
        if(filter(stus->stus[i])) {
            if(!delete_a_student(stus, i)) {
                return false;
            }
            i--;
        }
    }
    return true;
}

bool Modify(students * stus, modify_unit mds[], int modify_num) {
    int i;
    for(i = 0; i < modify_num; i++) {
        if(!modify_a_student(stus, mds[i].index, &(mds[i].stu))) {
            return false;
        }
    }
    return true;
}

bool Query(students * result, const students * stus, bool(*filter)(student stu)) {
    int i;
    for(i = 0; i < stus->student_num; i++) {
        if(filter(stus->stus[i])) {
            if(!append_a_student(result, &(stus->stus[i]))) {
                return false;
            }
        }
    }
    return true;
}
