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

int insertar(struct arbol **un_arbol,int elemento){
struct arbol *arbol_auxiliar = NULL;
if(*(un_arbol)==NULL){
arbol_auxiliar = (struct arbol*)malloc(sizeof(struct arbol));
if(arbol_auxiliar==NULL){
	return -1;
}	
// Aqui tengo el error que mata al programa :D
(*un_arbol)->dato=elemento;
(*un_arbol)->izquierdo = NULL;
(*un_arbol)->derecho = NULL;

}
else if((*un_arbol)->dato < elemento){
	insertar(&(*un_arbol)->derecho,elemento);
}
else if((*un_arbol)->dato > elemento){
	insertar(&(*un_arbol)->izquierdo,elemento);
}
}
