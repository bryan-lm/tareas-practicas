#include "funciones.h"
void Anadir(pNodo *primero, pNodo *ultimo, int v)
{
pNodo nuevo;
/* Crear un nodo nuevo */
nuevo = (pNodo)malloc(sizeof(tipoNodo));
nuevo->valor = v;
/* Este será el último nodo, no debe tener siguiente */
nuevo->siguiente = NULL;
/* Si la cola no estaba vacía, añadimos el nuevo a continuación de ultimo */
if(*ultimo) (*ultimo)->siguiente = nuevo;
/* Ahora, el último elemento de la cola es el nuevo nodo */
*ultimo = nuevo;
/* Si primero es NULL, la cola estaba vacía, ahora primero apuntará también al
nuevo nodo */
if(!*primero) *primero = nuevo;
}
int Leer(pNodo *primero, pNodo *ultimo)
{
pNodo nodo; /* variable auxiliar para manipular nodo */
int v;
/* variable auxiliar para retorno */
/* Nodo apunta al primer elemento de la pila */
nodo = *primero;
if(!nodo) return 0; /* Si no hay nodos en la pila retornamos 0 */
/* Asignamos a primero la dirección del segundo nodo */
*primero = nodo->siguiente;
/* Guardamos el valor de retorno */
v = nodo->valor;
/* Borrar el nodo */
free(nodo);
/* Si la cola quedó vacía, ultimo debe ser NULL también*/
if(!*primero) *ultimo = NULL;
return v;
}
