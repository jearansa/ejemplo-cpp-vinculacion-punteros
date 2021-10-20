
#include "Vinculacion.h"

// Ahora C++ no est� llamando internamente al constructor sin par�metros

Vinculacion::Vinculacion(Empleado * e1, Empresa* e2, long fi, long ff){
                                  // Una cuesti�n importante;
                                  // �C�mo hemos pasado los par�metros e1 y e2?
                                  // �A qu� direcciones de memoria apuntar�n
                                  // ahora "this->empl" y "this->empr"?
                                  this->empl = e1;
                                  this->empr = e2;
                                  this->iniContr = fi;
                                  this->finContr = ff;
}



Empleado * Vinculacion::getEmpleado(){
         return this->empl;
}

void Vinculacion::setEmpleado (Empleado * e1){
     this->empl = e1;
}

Empresa * Vinculacion::getEmpresa (){
         return this->empr;
}

void Vinculacion::setEmpresa (Empresa * e1){
     this->empr = e1;
}

long Vinculacion::getInicioContrato (){
     return this->iniContr;
}

void Vinculacion::setInicioContrato (long ic){
     this->iniContr = ic;
}

long Vinculacion::getFinContrato(){
     return this->finContr;
}

void Vinculacion::setFinContrato(long fc){
     this->finContr = fc;
}
