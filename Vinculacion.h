
#ifndef VINCULACION_H
#define VINCULACION_H 1

#include "Empleado.h"
#include "Empresa.h"

class Vinculacion{
      // Observar el uso de punteros para los atributos de las clases "Empresa"
      // y "Empleado"; tendrán importantes consecuencias en la construcción de 
      // objetos de la clase "Vinculacion" y en el paso de parámetros:
      private: Empleado * empl;
      private: Empresa * empr;
      private: long iniContr;
      private: long finContr;
      
      public: Vinculacion(Empleado*, Empresa*, long, long);
      public: Empleado * getEmpleado();
      public: void setEmpleado (Empleado *);
      public: Empresa * getEmpresa ();
      public: void setEmpresa (Empresa *);
      public: long getInicioContrato ();
      public: void setInicioContrato (long);
      public: long getFinContrato();
      public: void setFinContrato(long);
};

#endif
