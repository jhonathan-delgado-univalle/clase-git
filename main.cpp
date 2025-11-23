#include <iostream>
#include <string>
#include "views/Menu.h"

using namespace std;


int main() {

    Menu menu = Menu();
    // CRUD: Create - Read - Update - Delete
    menu.showMenu();
    
    return 0;
}
