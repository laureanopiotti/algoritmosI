/*9) Escribir en C un programa que pida al usuario dos palabras. El programa debe impri-
mir ambas palabras en una l ́ınea, separadas por una secuencia de puntos de forma tal que la
longitud total de la l ́ınea sea de 30 caracteres. Ejemplo:
Primera palabra: Hola
Segunda palabra: Mundo
Hola.....................Mundo *

*/

#include <stdio.h>
#include <string.h>


int main() {
	char palabra_1[256];
	char palabra_2[256];
	printf("Ingrese una palabra: ");
	fgets(palabra_1,256,stdin);
	printf("Ingrese otra palabra: ");
	fgets(palabra_2,256,stdin);
	palabra_1[strlen(palabra_1) -1] = '\0';
	palabra_2[strlen(palabra_2) -1] = '\0';
	int len_1 = strlen(palabra_1);
	int len_2 = strlen(palabra_2);

	if (len_1 > 30) {
		palabra_1[31] = '\0';
	}
	if (len_2 > 30) {
		palabra_1[31] = '\0';
	}


	int cant_puntos = 30 - len_1 - len_2;
	printf("%s",palabra_1);
	if (cant_puntos <= 0) {
			palabra_2[0] = '\0';
	for(int i = 0; i <= cant_puntos; i++) {

		}
		printf(".");
	}
	printf("%s\n",palabra_2);
}