#include "StudentController.h"

void StudentController::create(int id, string fullname, int age, string address) {
    Student student = Student(id, fullname, age, address);
    this->students.push_back(student);
    student.showInfo();
}

void StudentController::listAll() {
    for (int i=0 ; i < this->students.size() ; i++) {
        Student s = students[i];
        s.showInfo();
    }
}

Student* StudentController::get(int id) {
    for (int i=0 ; i < this->students.size() ; i++) {
        Student* s = &(students[i]);
        if (s->getId() == id) {
            return s;
        }
    }
    return nullptr;
}

bool StudentController::remove(int id) {
    for (auto s = this->students.begin() ; s != this->students.end() ; ++s) {
        if (s->getId() == id) {
            this->students.erase(s);
            return true;
        }
    }
    return false;
}