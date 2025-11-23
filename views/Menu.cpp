#include "Menu.h"
#include "../controllers/StudentController.h"

void Menu::showMenu() {
    StudentController studentController = StudentController();
    int option;
    do {
        cout << "==== MENU ====" << endl;
        cout << "1. Agregar Estudiante" << endl;
        cout << "2. Eliminar Estudiante" << endl;
        cout << "3. Modificar Estudiante" << endl;
        cout << "4. Listar todos los Estudiantes" << endl;
        cout << "0. Salir" << endl;
        cout << "Eleja una opcion: ";
        cin >> option;

        switch (option)
        {
            case 1: {
                int id, age;
                string fullname = "";
                string address = "";
                cout << "++++ Agregar Estudiante ++++" << endl;
                cout << "ID: ";
                cin >> id;
                cout << "Nombre completo: ";
                cin.ignore();
                getline(cin, fullname);
                cout << "Edad: ";
                cin >> age;
                cout << "Dirección: ";
                cin.ignore();
                getline(cin, address);
                studentController.create(id, fullname, age, address);
                break;
            }
            case 2:{
                int id;
                cout << "---- Eliminar Estudiante ----" << endl;
                cout << "ID: ";
                cin >> id;
                bool removed = studentController.remove(id);
                if (removed) {
                    cout << "Estudiante eliminado.\n";
                } else {
                    cout << "Estudiante NO encontrado.\n";
                }
                break;
            }
            case 3:{
                int id;
                cout << "**** Modificar Estudiante ****" << endl;
                cout << "ID: ";
                cin >> id;
                auto student = studentController.get(id);
                if (student) {
                    string fullname;
                    cout << "Nombre completo: ";
                    cin.ignore();
                    getline(cin, fullname);
                    student->setFullName(fullname);
                } else {
                    cout << "Estudiante NO encontrado.\n";
                }
                break;
            }
            case 4:
                studentController.listAll();
                break;
        }
    } while(option != 0);

}