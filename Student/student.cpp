#include "student.h"
#include "structure.h"
#include <malloc.h>
#include <stdio.h>
#include <string.h>

bool init_studetns(students ** stus) {
    if((*stus) != NULL) {
        return false;
    }
    (*stus) = (students *)malloc(sizeof(students));
    (*stus) ->array_size = 0;
    (*stus) ->student_num = 0;
    (*stus) ->stus = NULL;
    return true;
}

bool init_a_student(student * stu, int id, char * name, int Class, int grade) {
    stu->id = id;
    stu->Class = Class;
    stu->grade = grade;
    strcpy(stu->name, name);
}

bool append_a_student(students * stus, const student * new_student) {
    if(stus == NULL || new_student == NULL) {
        return false;
    }
    if(stus->student_num + 1 <= stus->array_size) {
        stus->stus[stus->student_num] = *(new_student);
        stus->student_num++;
    } else {
        int new_array_size = (stus->array_size == 0 ? 8 : stus->array_size * 2);
        student * new_stus  = (student *)malloc(sizeof(student) * (new_array_size));

        if(new_stus == NULL) {
            return false;
        }

        int i;

        for(i = 0; i < stus->student_num; i++) {
            new_stus[i] = stus->stus[i];
        }

        new_stus[i] = *(new_student);

        free(stus->stus);
        stus->stus = new_stus;
        stus->student_num++;
        stus->array_size = new_array_size;
    }
    return true;
}

bool delete_a_student(students * stus, int index) {
    if(stus == NULL || index > stus->student_num - 1) {
        return false;
    }
    int i;
    for(i = index; i < stus->student_num - 1; i++) {
        stus->stus[i] = stus->stus[i+1];
    }
    stus->student_num--;
    return true;
}

bool modify_a_student(students * stus, int index, const student * new_student) {
    if(stus == NULL || index > stus->student_num - 1 || new_student == NULL) {
        return false;
    }
    stus->stus[index] = *new_student;
    return true;
}

bool delete_students(students ** stus) {
    if((*stus) == NULL) {
        return false;
    }
    free(*stus);
    (*stus) = NULL;
    return true;
}
