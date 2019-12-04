#include "funciones.h"


void insertar(Lista *lista, int v)
{
 pNodo nuevo, anterior;
 /* Crear un nodo nuevo */
 nuevo = (pNodo)malloc(sizeof(tipoNodo));
 nuevo->valor = v;
 /* Si la lista está vacía */
 if(listaVacia(*lista) || (*lista)->valor > v)
 {
 /* Añadimos la lista a continuación del nuevo nodo */
 nuevo->siguiente = *lista;
 /* Ahora, el comienzo de nuestra lista es en nuevo nodo */
 *lista = nuevo;

 }
 else
 {
 /* Buscar el nodo de valor menor a v */
 anterior = *lista;
 /* Avanzamos hasta el último elemento o hasta que el siguiente tenga
 un valor mayor que v */
 while(anterior->siguiente && anterior->siguiente->valor <= v)
 anterior = anterior->siguiente;
 /* Insertamos el nuevo nodo después del nodo anterior */
 nuevo->siguiente = anterior->siguiente;
 anterior->siguiente = nuevo;
 }
}
void borrar(Lista *lista, int v)
{
 pNodo anterior, nodo;
 nodo = *lista;
 anterior = NULL;
 while(nodo && nodo->valor < v)
 {
 anterior = nodo;
 nodo = nodo->siguiente;
 }
 if(!nodo || nodo->valor != v)
 return;
 else
 { /* Borrar el nodo */
 if(!anterior) /* Primer elemento */
 *lista = nodo->siguiente;
 else /* un elemento cualquiera */
 anterior->siguiente = nodo->siguiente;
 free(nodo);
 }
}

int listaVacia(Lista lista)
{
 return (lista == NULL);
}
void borrarLista(Lista *lista)
{
 pNodo nodo;
 while(*lista)
 {
 nodo = *lista;
 *lista = nodo->siguiente;
 free(nodo);
 }
}
void mostrarLista(Lista lista)
{
 pNodo nodo = lista;
 if(listaVacia(lista))
 printf("Lista vacia\n");
 else
 {
 while(nodo)
 {
 printf("%d -> ", nodo->valor);
 nodo = nodo->siguiente;
 }
 printf("\n");
 }
}

