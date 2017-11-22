/*Ejercicio 18.6. Implementar la función void strcpy(const char *origen, char *destino) que
copia la cadena origen en la dirección de memoria apuntada por destino . Asumir que destino
apunta a un arreglo de caracteres con espacio suficiente ( strlen(origen) + 1 ).
*/

#include <stdio.h>
#include <string.h>

void * strcpyA(const char *origen,char *destino) {
	for(int i = 0; origen[i] != '\0'; i++){
		destino[i] = origen[i];
	}
	return destino;
}

int main() {
	const char *hola = "JOJO";
	printf("%s",hola);
	char kisde[15] = {'\0' };
	strcpy(hola,kisde);
	printf("%s",kisde);
	return 0;
}