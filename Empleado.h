
#ifndef EMPLEADO_H
#define EMPLEADO_H 1

#include <string>

using namespace std;

class Empleado {
      private: string nombre;
      private: long nif;
      // La fecha de nacimiento la almacenamos como un "long" en forma "aaaammdd";
      private: long fecha_nac;

      public: Empleado (string, long, long);
      public: string getNombre();
      public: void setNombre (string);
      public: long getNIF ();
      public: void setNIF (long);
      public: long getFechaNacimiento();
      public: void setFechaNacimiento(long);
};

#endif
