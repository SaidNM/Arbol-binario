#include "arbol.h"

int
main ()
{
  struct arbol *un_arbol=NULL;
  int dato=0;
  int dato1=0;
  int dato2=0;
  int busq=0;
  /*printf("\nIntroduzca un numerito: ");
  scanf("%d",&dato);
  printf("---------------");
  insertar(&un_arbol,dato);
  printf("\nIntroduzca un numerito: ");
  scanf("%d",&dato1);
  insertar(&un_arbol,dato1);
  printf("\nIntroduzca un numerito: ");
  scanf("%d",&dato2);
  insertar(&un_arbol,dato2);*/
  mostrar (un_arbol);
  printf("\nDato a buscar: ");
  scanf("%d",&busq);
  printf ("\n %d ", buscar(un_arbol,busq));
  getch();
  return 0;
}
