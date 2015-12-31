#ifndef STRUCTURE_H_INCLUDED
#define STRUCTURE_H_INCLUDED

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

#endif // STRUCTURE_H_INCLUDED
