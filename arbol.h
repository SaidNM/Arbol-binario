#ifndef __ARBOL_H__
#define __ARBOL_H__
#include <stdio.h>
#include <stdlib.h>

struct arbol{
int dato;
struct arbol *derecho;
struct arbol *izquierdo;
};

int insertar(struct arbol **,int);
int buscar(struct arbol *,int);
int eliminar(struct arbol *,int);
void mostrar(struct arbol *);

#endif

