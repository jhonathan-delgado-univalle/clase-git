#include "Persona.h"

Persona::Persona(string nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
    cout << "Constructor Persona: " << this->nombre << endl;
}

Persona::~Persona() {
    cout << "Destructor Persona: " << this->nombre << endl;
}

void Persona::setNombre(string n) {
    this->nombre = n;
}

string Persona::getNombre() {
    return this->nombre;
}

void Persona::setEdad(int e) {
    this->edad = e;
}

int Persona::getEdad() {
    return this->edad;
}
