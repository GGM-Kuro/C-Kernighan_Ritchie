/* CURSO C LIBRO KERNIGHAN & RITCHIE
	Programa de conversion de Fahrenheit a Celsius

   capitulo 1, variables, expresiones e iteraciones
   herramientas: getchar,putchar

*/

#include <stdio.h>
// imprime la tabla de F-C para fahr=0,20 ..., 300

int main()
{
	long nc;
	nc = 0;


   while (getchar()!=EOF)
		++nc;

	printf("%ld\n",nc);
}
