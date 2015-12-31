#include <stdio.h>
#include "storage.h"
#include "structure.h"
#include "student.h"

bool writeToFile(students * stus) {
    FILE * f = fopen(data_file_path, "w");
    if(f == NULL) {
        return false;
    }
    int i;
    for(i = 0; i < stus->student_num; i++) {
        fprintf(f, "%s %d %d %d\n", stus->stus[i].name, stus->stus[i].id,
                                stus->stus[i].Class, stus->stus[i].grade);
    }
    return true;
}

bool ReadFromFile(students * stus) {
    FILE * f = fopen(data_file_path, "r");
    if(f == NULL) {
        return false;
    }
    student temp;

    while(fscanf(f, "%s %d %d %d", temp.name, &(temp.id), &(temp.Class), &(temp.grade)) != EOF) {
        if(!append_a_student(stus, &temp)) {
            return false;
        }
    }
    return true;
}
