/*
5) Escribir en C una funci ́on que pida al usuario que ingrese una cadena y la imprima
invertida.
*/

#include <stdio.h>
#include <string.h>

#define TAM 100

void invertir(char cadena[]) {
	unsigned int len = strlen(cadena);
	for(int i = 0; i < len; i++) {
		printf("%c",cadena[len - i - 1]);
	}
	printf("\n");
}

int main() {
	char cadena[TAM];
	printf("Ingrese una cadena: ");
	fgets(cadena,TAM,stdin);
	cadena[strlen(cadena)-1] = '\0';
	invertir(cadena);
}

