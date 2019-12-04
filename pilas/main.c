#include "funciones.h"
int main(void)
{
Pila pila = NULL;
Push(&pila,20);
Push(&pila,10);
printf("%d,", Pop(&pila));
Push(&pila,40);
Push(&pila,30);





printf("%d, ", Pop(&pila));
printf("%d, ", Pop(&pila));
Push(&pila, 90);
printf("%d, ", Pop(&pila));
printf("%d\n", Pop(&pila));

return 0;
}
