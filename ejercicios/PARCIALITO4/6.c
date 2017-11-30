/*
6) Escribir en C un programa que pida al usuario un valor m ́ınimo, un valor m ́aximo y un
numero n, e imprima una tabla con los cuadrados de los n umeros entre m ́ınimo y m ́aximo cada n nqumeros. Por ejemplo (m ́ınimo = 0, m ́aximo = 17, n = 5) debe mostrar:
0 0
5 25
10 100
15 225



int buscar_maximo(int arreglo[],int tam) {
	int max = arreglo[0]
	for(int i=1, i < tam, i++) {
		if (arreglo[i] > max) {
			max = arreglo[i];
		}
	}
	return max;
}

*/

#define TAM 50
#include <stdio.h>
#include <string.h>


int main() {
	char minimo[TAM];
	char maximo[TAM];
	char n[TAM];
	printf("Ingresa un minimo: ");
	fgets(minimo,TAM,stdin);
	printf("Ingresa un maximo: ");
	fgets(maximo,TAM,stdin);
	printf("Ingresa n: ");
	fgets(n,TAM,stdin);
	int minimon = atoi(minimo);
	int maximon = atoi(maximo);
	int nn = atoi(n);
	/*printf("%d\n",minimon);
	printf("%d\n",maximon);
	printf("%d\n",nn);
	while (minimon <= maximon) {
		printf("%d %d\n",minimon,minimon*minimon);
		minimon += nn;
	}
	*/
	for(int i= minimon ;i <= maximon; i += nn) {
		printf("%d %d\n",i,i*i);
	}
}