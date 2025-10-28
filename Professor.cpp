#include "Professor.h"

Professor::Professor(int id, string fullName, int age, string address): Person(id, fullName, age, address) {
    cout << "Constructor Professor: " << this->getFullName() << endl;
}

void Professor::setSpeciality(string s) {
    this->speciality = s;
}

void Professor::setExperience(int e) {
    this->experience = e;
}

string Professor::getSpeciality() {
    return this->speciality;
}

int Professor::getExperience() {
    return this->experience;
}