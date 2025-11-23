#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <iostream>
#include "Person.h"

using namespace std;

class Professor: public Person {
private:
    string speciality;
    int experience;

public:
    Professor(int id, string fullName, int age, string address, string speciality);
    void setSpeciality(string s);
    void setExperience(int e);
    string getSpeciality();
    int getExperience();
    void showInfo();

};

#endif // PROFESSOR_H
