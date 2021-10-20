
#ifndef EMPRESA_H
#define EMPRESA_H 1

#include <string>

using namespace std;

class Empresa {
      private: string nombre;
      private: long cif;

      public: Empresa (string, long);
      public: string getNombre();
      public: void setNombre (string);
      public: long getCIF ();
      public: void setCIF (long);
};

#endif
