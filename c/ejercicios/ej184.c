/*Ejercicio 18.4. Implementar la función unsigned int strlen(const char *s) que devuelve la
longitud de la cadena s (sin contar el último caracter '\0' ).
a) En forma iterativa.
b) En forma recursiva.


#include <stdio.h>
//#include <string.h>

unsigned int strlen(const char *s) {
	int len = 0;
	for(int i = 0; s[i] != '\0'; i++) {
		len ++;
	}
	return len;
}

int main() {
	char *s = "Hola mundo!";
	int len = strlen(s);
	printf("La long de s es: %d\n",len);
	return 0;
}

FUNCIONA! 

#include <stdio.h>
//#include <string.h>


unsigned int strlen(const char *s, size_t len) {
	int len = 0
	if (*s = '\0') {
		return len;
	}

	len++;
	strlen(++s,len);
}

int main() {
	const char *s = "Holamundo!";
	int len = 0;
	strlen(*s,len);
	printf("La long de s es: %d\n",len);
	return 0;
}

*/

#include <stdio.h>
#include <string.h>

/* finds length of the given string using recursion */
int stringLength(char *str, int len) {

	if (*str != '\0') {
	len++;
	len = stringLength(str + 1, len);
	}
	return len;
}

int main() {
	char *str = "LOOOOOOOL", len = 0;
	len = stringLength(str, len);
	printf("Length of the given input string is %d\n", len);
	return 0;
}