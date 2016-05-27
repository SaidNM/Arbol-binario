#include "arbol.h"

int
main ()
{
  struct arbol un_arbol;
  struct arbol subarbol1;
  subarbol1.dato = 10;
  subarbol1.derecho = NULL;
  subarbol1.izquierdo = NULL;
  un_arbol.dato = 2;
  un_arbol.derecho = NULL;
  un_arbol.izquierdo = NULL;

  un_arbol.derecho = &subarbol1;
  mostrar (&un_arbol);
printf(" %d ", buscar(&un_arbol,10));

  return 0;
}
