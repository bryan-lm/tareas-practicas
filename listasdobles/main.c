#include "funciones.h"
int main()
{
Lista lista = NULL;
pNodo p;
Insertar(&lista,20);
Insertar(&lista,10);
Insertar(&lista,40);
Insertar(&lista,30);

MostrarLista(lista, ASCENDENTE);
MostrarLista(lista, DESCENDENTE);
Borrar(&lista,10);
Borrar(&lista,15);
Borrar(&lista,45);
Borrar(&lista,45);

MostrarLista(lista, ASCENDENTE);
MostrarLista(lista, DESCENDENTE);
BorrarLista(&lista);

return 0;
}
