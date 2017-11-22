/*
Ejercicio 18.5. Implementar la función void invertir(char *s) que invierte la cadena s (in-
place).
*/

#include <stdio.h>
#include <string.h>

void invertir(char *s) { // char s []
	unsigned int len = strlen(s);
	for(int i = 0; i < len / 2 ; i++) {
		char aux;
		aux = s[i];
		s[i] = s[len - 1 - i];
		s[len -1] = aux;
	}

}

int main() {
	char saludo[] = "Hola Mundo!";
	invertir(saludo);
	printf("/n",saludo);
	return 0;
}
