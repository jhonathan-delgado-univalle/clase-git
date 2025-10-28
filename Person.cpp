#include "Person.h"

Person::Person(int id, string fullName, int age, string address) {
    this->id = id;
    this->fullName = fullName;
    this->age = age;
    this->address = address;
    // cout << "Constructor Person: " << this->fullName << endl;
}

Person::~Person() {
    // cout << "Destructor Person: " << this->fullName << endl;
}

void Person::setFullName(string n) {
    this->fullName = n;
}

string Person::getFullName() {
    return this->fullName;
}

void Person::setAge(int e) {
    this->age = e;
}

int Person::getAge() {
    return this->age;
}

void Person::setId(int id) {
    this->id = id;
}

int Person::getId() {
    return this->id;
}

void Person::setAddress(string a) {
    this->address = a;
}

string Person::getAddress() {
    return this->address;
}
