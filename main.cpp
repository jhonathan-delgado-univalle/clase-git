#include <iostream>
#include <string>
#include "Persona.h"

using namespace std;


int alCuadrado(int n) {
    n = n * n;
    cout << "1. Dentro de Al Cuadrado: " << n << endl;
    return n;
}

int alCuadradoReferencia(int &n) {
    n = n * n;
    cout << "2. Dentro de Al Cuadrado por Referencia: " << n << endl;
    return n;
}

int alCuadradoPuntero(int *const n) {
    *n = (*n) * (*n);
    cout << "3. Posición Dentro de Al Cuadrado por Puntero: " << n << endl;
    cout << "3. Dentro de Al Cuadrado por Puntero: " << *n << endl;
    return (*n);
}

void modificarEdad(Persona p, int nuevaEdad) {
    p.setEdad(nuevaEdad);
}

void modificarEdadPuntero(Persona *p, int nuevaEdad) {
    p->setEdad(nuevaEdad);
}


int main() {

    int numero = 3;

    cout << "Valor inicial: " << numero << endl;

    cout << "PASO POR VALOR" << endl;
    numero = alCuadrado(numero);
    cout << "Valor final: " << numero << endl;

    cout << "PASO POR REFERENCIA" << endl;
    alCuadradoReferencia(numero);
    cout << "Valor final: " << numero << endl;
    
    cout << "PASO POR PUNTERO" << endl;
    cout << "Posicion: " << &numero << endl;
    alCuadradoPuntero(&numero);
    cout << "Valor final: " << numero << endl;
    
    
    cout << "#################################" << endl;
    Persona p1("Juan", 15);
    cout << "Inicial P1: Nombre: " << p1.getNombre() << " Edad: " << p1.getEdad() << endl;
    modificarEdad(p1, 16);
    cout << "Paso por valor - P1: Nombre: " << p1.getNombre() << " Edad: " << p1.getEdad() << endl;
    
    modificarEdadPuntero(&p1, 16);
    cout << "Paso por puntero - P1: Nombre: " << p1.getNombre() << " Edad: " << p1.getEdad() << endl;
    
    Persona *p2 = new Persona("Mateo", 25);
    cout << "P2: Nombre: " << p2->getNombre() << " Edad: " << p2->getEdad() << endl;
    
    modificarEdadPuntero(p2, 28);
    cout << "P2: Nombre: " << p2->getNombre() << " Edad: " << p2->getEdad() << endl;
    
    delete p2;


    return 0;
}
