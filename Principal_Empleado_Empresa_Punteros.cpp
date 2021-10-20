
#include <cstdlib>
#include <iostream>
#include "Vinculacion.h"

using namespace std;

int main (){

    Empleado * e1 = new Empleado ("Pepe", 1234, 19501111);
    Empresa * e2 = new Empresa ("Tara", 4321);

    Vinculacion * v1 = new Vinculacion (e1, e2, 20201003, 20221003);
    Vinculacion * v2 [15];
    v2 [0] = v1;
    // La siguiente orden compilar�a, pero el puntero no est� reservado
    // v2[1]->getEmpleado()->setNombre ("Antonio");

    cout << "El nombre de la empresa es " << v1->getEmpresa()->getNombre() << endl << endl;

    // Cuidado con los efectos laterales; al estar trabajando con punteros,
    // y no realizar copias de los objetos, los cambios sobre uno de ellos
    // afectan al resto de lugares donde aparezca ese objeto:

    e2->setNombre ("Lara");
    cout << "El nombre de la empresa es en e2 " << e2->getNombre() << endl << endl;
    cout << "El nombre de la empresa es en la vinculaci�n " << v1->getEmpresa()->getNombre() << endl << endl;
    cout << "El nombre de la empresa es en el vector " << v2[0]->getEmpresa()->getNombre() << endl << endl;

    // En la clase Vinculacion no tenemos constructor sin par�metros;
    // El hecho de haber declarado nuestro propio constructor
    // Vinculacion(Empleado *, Empresa*, long, long)
    // hace que el constructor sin par�metros no aparezca por defecto,
    // deber�amos incluirlo nosotros expl�citamente si queremos usarlo.
    // Por ello, no funcionan las siguientes �rdenes:
    // Vinculacion v1;
    // Vinculacion v [45];

    system ("PAUSE");
    return 0;
}
