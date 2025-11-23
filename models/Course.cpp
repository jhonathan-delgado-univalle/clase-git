#include "Course.h"

Course::Course(int id, string name, int capacity, bool isActive, Professor* professor) {
    this->id = id;
    this->name = name;
    this->capacity = capacity;
    this->isActive = isActive;
    this->professor = professor;
}

Course::~Course() {}

string Course::getName() {
    return this->name;
}

Professor* Course::getProfessor() {
    return this->professor;
}

void Course::setProfessor(Professor* p) {
    this->professor = p;
}