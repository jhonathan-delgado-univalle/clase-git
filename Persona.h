#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
        string nombre;
        int edad;

public:
    Persona(string nombre, int edad);
    ~Persona();
    void setNombre(string n);
    string getNombre();
    void setEdad(int e);
    int getEdad();

};

#endif // PERSONA_H