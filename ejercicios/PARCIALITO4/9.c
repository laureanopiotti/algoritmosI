/*9) Escribir en C un programa que pida al usuario dos palabras. El programa debe impri-
mir ambas palabras en una l ́ınea, separadas por una secuencia de puntos de forma tal que la
longitud total de la l ́ınea sea de 30 caracteres. Ejemplo:
Primera palabra: Hola
Segunda palabra: Mundo
Hola.....................Mundo *

*/

#include <stdio.h>


int main() {
	char resultado[31];
	char palabra_1[30];
	char palabra_2[30];

	fgets(palabra_1,30,stdin);

	fgets(palabra_2,30,stdin);

	int len_1 = strlen(palabra_1);
	int len_2 = strlen(palabra_2);
	palabra_1[strlen(palabra_1) -1] = '\0';
	palabra_2[strlen(palabra_1) -1] = '\0';

	int cant_puntos = 30 - len_1 - len_2;

	printf("%s",palabra_1);
	for(int i = 0; i < cant_puntos; i++) {
	//	if (cant_puntos < 0) {
	//		palabra_2[strlen(palabra_2)+cant_puntos] = '\0';
		printf(".");
	}
	printf("%s",palabra_2);
}