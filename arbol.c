#include "arbol.h"

void
mostrar (struct arbol *un_arbol)
{
  if (un_arbol == NULL)
    {
      return;
    }
  printf (" %d ", un_arbol->dato);
  mostrar (un_arbol->derecho);
  mostrar (un_arbol->izquierdo);
}

int buscar(struct arbol *un_arbol, int dato){
if(un_arbol==NULL){
return 0;
}
if(dato==un_arbol->dato){
return 1;
}
if(dato > un_arbol->dato){
return buscar(un_arbol->derecho,dato);
}
else{
return buscar(un_arbol->izquierdo,dato);
}
}

