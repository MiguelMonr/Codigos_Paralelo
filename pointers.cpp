#include <iostream>
using namespace std;

int main()
{
    int numero = 8;
    int *apuntador; //! ASI DEFINES LOS APUNTADORES
    // Luego asignas la direccion de memorias
    apuntador = &numero;
    cout << "El valor del numero " << numero << endl;
    cout << "La direcciond del numero " << &numero << endl;
    cout << "La direcciond del apuntador " << apuntador << endl;
    cout << "La direcciond del numero n3 " << &apuntador << endl;
    cout << "El valor del numero " << *apuntador << endl; //* * es para acceder al valor
    // asignando apuntadores
    *apuntador = 8;
    cout << "La direcciond del apuntador " << *apuntador << endl;
    cout << "La direcciond del apuntador " << numero << endl;

    // la direccion del apuntador es distinta de donde apunta
    return 0;
}