#ifndef ASIGNATURE_H
#define ASIGNATURE_H
#include <iostream>
#include <string>
#include "Course.h"
#include "Student.h"

using namespace std;

class Asignature {
private:
    Student* student;
    Course* course;

public:
    Asignature(Student* student, Course* course);
    ~Asignature();
};

#endif // ASIGNATURE_H
