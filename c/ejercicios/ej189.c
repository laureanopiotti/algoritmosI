/* Ejercicio 18.9. Implementar una función que reciba una cadena de texto y luego imprima la
cadena enmarcada entre asteriscos ( * ). Asumir que la cadena no contiene ningún caracter \n .
Por ejemplo, si se recibe la cadena "Lenguaje C" , debe imprimir:
**************
* Lenguaje C *
**************
     buffer  tam    stdin  
fgets(char*,size_t,file*)

EJEMPLO PARA PEDIR INPUT AL USUARIO

#define TAM 30
#include <stdio.h>
#include <string.h>

int main() { 
	char buffer[TAM];
	printf("Ingrese su nombre: ");
	fgets(buffer,TAM,stdin);
	buffer[strlen(buffer)-1] = '\0';
	printf("Tu nombre es %s, de longitud %d\n",buffer,strlen(buffer));
	return 0;
}

*/

#include <stdio.h>
#include <string.h>

#define TAM 30

void pedir_input(char * buffer, int tam) {
	printf("Ingrese una cadena: ");
	fgets(buffer,TAM,stdin);
	buffer[strlen(buffer) - 1] = '\0';
}

void imprimir_recuadrado(char* buffer, size_t tam) {
	for(int i = 0; i < tam + 2; i++) {
		printf("*");
	}
	printf("\n*%s*\n",buffer);
	for(int i = 0; i < tam + 2; i++) {
		printf("*");
	}
	printf("\n");
}

int main() {
	char buffer[TAM];
	pedir_input(buffer,TAM);
	imprimir_recuadrado(buffer,strlen(buffer));
	return 0;
}



