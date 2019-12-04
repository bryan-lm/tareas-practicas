#include "funciones.h"
int main(void)
{
 Lista lista = NULL;
 pNodo p;
 insertar(&lista, 20);
 mostrarLista(lista);
 insertar(&lista, 10);
 mostrarLista(lista);
 insertar(&lista, 40);
 mostrarLista(lista);

 insertar(&lista, 30);
 mostrarLista(lista);
 puts("\nLista completa:");
 mostrarLista(lista);
 puts("\nBorramos elemento a elemento");
 borrar(&lista, 10);
 mostrarLista(lista);
 borrar(&lista, 15); // este elemento no existe
 mostrarLista(lista);
 borrar(&lista, 45);//no existe
 mostrarLista(lista);
 borrar(&lista, 30);
 mostrarLista(lista);
 borrar(&lista, 40);
 mostrarLista(lista);
 //borrar(&lista, 20);
 borrarLista(&lista);
 mostrarLista(lista);
 system("PAUSE");
 return 0;
}

