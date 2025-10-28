#include <iostream>
#include <string>
#include "Student.h"
#include "Professor.h"
#include "Course.h"

using namespace std;


int main() {

    Student student = Student(1, "Juan Perez", 20, "Street 1");
    cout << "Student name: " << student.getFullName() << endl;
    
    Professor professor = Professor(1, "Mariano Jimenez", 40, "Street 2");
    cout << "Professor name: " << professor.getFullName() << endl;
    cout << "Professor age: " << professor.getAge() << endl;
    
    Course course = Course(1, "Chemestry", 30, true, &professor);
    cout << "Course name: " << course.getName() << endl;
    
    professor.setAge(41);
    Professor* p1 = course.getProfessor();
    cout << "Professor name: " << p1->getFullName() << endl;
    cout << "Professor age: " << p1->getAge() << endl;
    cout << "Professor age: " << professor.getAge() << endl;
    
    
    Professor* professor2 = new Professor(2, "Julian Garcia", 35, "Street 3");
    course.setProfessor(professor2);
    Professor* p2 = course.getProfessor();
    cout << "New Professor name: " << p2->getFullName() << endl;
    cout << "New Professor age: " << p2->getAge() << endl;
    
    
    return 0;
}
