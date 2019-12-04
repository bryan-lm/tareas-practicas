#ifndef __CONTIGUA_H__
#define __CONTIGUA_H__
#include <stdlib.h>
#include <stdio.h>
typedef struct _nodo {
int valor;
struct _nodo *siguiente;
} tipoNodo;
typedef tipoNodo *pNodo;
typedef tipoNodo *Lista;
// Funciones con listas:
void Insertar(Lista *l, int v);
void Borrar(Lista *l, int v);
void BorrarLista(Lista *);
void MostrarLista(Lista l);
#endif
