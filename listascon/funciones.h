#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

#include <stdio.h>
#include <stdlib.h>
struct nodo {
 int valor;
 struct nodo *siguiente;
};//tipoNodo;
typedef struct nodo tipoNodo;
typedef tipoNodo *pNodo;
typedef tipoNodo *Lista;
/* Funciones con listas: */
void insertar(Lista *l, int v);
void borrar(Lista *l, int v);
int listaVacia(Lista l);
void borrarLista(Lista *l);
void mostrarLista(Lista l);


#endif



