#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
        int id;
        string fullName;
        int age;
        string address;

public:
    Person(int id, string fullName, int age, string address);
    ~Person();
    void setFullName(string n);
    string getFullName();
    void setAddress(string n);
    string getAddress();
    void setAge(int e);
    int getAge();
    void setId(int i);
    int getId();

};

#endif // PERSON_H
