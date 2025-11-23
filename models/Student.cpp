#include "Student.h"

Student::Student(int id, string fullName, int age, string address): Person(id, fullName, age, address) {
    // cout << "Constructor Student: " << this->getFullName() << endl;
}

Student::~Student() {
    Person::~Person();
}