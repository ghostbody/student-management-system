#ifndef STORAGE_H_
#define STORAGE_H_
#include "structure.h"

const char * data_file_path = "./data.txt";

bool writeToFile(students * stus);
bool ReadFromFile(students * stus);
#endif
