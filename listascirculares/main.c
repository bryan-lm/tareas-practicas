#include "funciones.h"
int main()
{
Lista lista = NULL;
pNodo p;
Insertar(&lista,10);
Insertar(&lista,40);
Insertar(&lista,30);
Insertar(&lista,20);
Insertar(&lista,50);

MostrarLista(lista);
Borrar(&lista, 30);
Borrar(&lista, 50);
MostrarLista(lista);
BorrarLista(&lista);
return 0;
}
