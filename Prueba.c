#include <stdio.h>
#include <conio.h>

int main()
{
printf("Hola mundo\n");
double a,b,r;
//Incluimos Calculadora Basica

printf("Ingrese un numero:\n");
scanf("%d",&a);

printf("Ingrese otro numero:\n");
scanf("%d",&a);

printf("\nLos resultados son lo siguientes\n");
printf("\nSuma:\n");
r=a+b;
printf("%d",r);

printf("\nResta:\n");
r=a-b;
printf("%d",r);

printf("\nMultiplicacion:\n");
r=a*b;
printf("%d",r);

printf("\nDivicion:\n");
r=a/b;
printf("%i",r);

printf("\nGracias,buen dia\n");

system ("pause");
return 0;

}
