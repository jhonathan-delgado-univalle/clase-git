#ifndef STUDENTCONTROLLER_H
#define STUDENTCONTROLLER_H

#include <iostream>
#include <vector>
#include "../models/Student.h"

using namespace std;

class StudentController {
private:
    vector<Student> students;
public:
    void create(int id, string fullName, int age, string address);
    bool remove(int id);
    Student* get(int id);
    void listAll();
};

#endif // STUDENTCONTROLLER_H
