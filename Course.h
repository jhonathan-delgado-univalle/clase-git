#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include "Professor.h"

using namespace std;

class Course {
private:
        int id;
        string name;
        int capacity;
        bool isActive;
        Professor* professor;

public:
    Course(int id, string name, int capacity, bool isActive, Professor* professor);
    ~Course();
    void setName(string n);
    string getName();
    void setId(int i);
    int getId();
    void setCapacity(int c);
    int getCapacity();
    void setProfessor(Professor* p);
    Professor* getProfessor();

};

#endif // COURSE_H
