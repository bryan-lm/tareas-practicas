#include "funciones.h"
int main(void)
{
pNodo primero = NULL, ultimo = NULL;
Anadir(&primero, &ultimo, 20);
printf("Añadir(20)\n");
Anadir(&primero, &ultimo, 10);
printf("Añadir(10)\n");
printf("Leer: %d\n", Leer(&primero,&ultimo));
Anadir(&primero, &ultimo, 40);
printf("Añadir(40)\n");
Anadir(&primero, &ultimo, 30);
printf("Añadir(30)\n");
printf("Leer: %d\n", Leer(&primero,&ultimo));
printf("Leer: %d\n", Leer(&primero,&ultimo));
Anadir(&primero, &ultimo, 90);
printf("Añadir(90)\n");
printf("Leer: %d\n", Leer(&primero,&ultimo));
printf("Leer: %d\n", Leer(&primero,&ultimo));





system("PAUSE");
return 0;
}
