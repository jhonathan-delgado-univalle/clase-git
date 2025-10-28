#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Person.h"

using namespace std;

class Student: public Person {
public:
    Student(int id, string fullName, int age, string address);
    bool isEnrolled();

};

#endif // STUDENT_H
