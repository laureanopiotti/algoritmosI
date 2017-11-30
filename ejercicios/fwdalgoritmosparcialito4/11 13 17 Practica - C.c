/*
#include <studio.h>
unsigned int long_cadena(char cadena[]){
	unsigned int len = 0;
	for (unsigned int i, cadena[i] != '\0',i++){
		len++;
	}

return len;
}

int main(){
	char cadena[]= "Hola Barbara!\0"
	unsigned int len = long_cadena(cadena[])
	printf("La long de %s es: %d\n", cadena, len)
	return 0

}
*/
// 18 . 2 Factorial de N de manera recursiva
#include <studio.h>

int factorial(int n){
	if (n<0)
		return 0;

	if (n==0)
		return 1;
	return n * factorial(n-1)
}

int main () {
	printf("%d\n",factorial(5))
	return 0;
}
// 18 . 5 Invertir
#include <studio.h>
#include <string.h>

void invertir(){
	for(int i, i< len/2, i++) {
		char aux;
		aux= s[i]
		s[i]=s[len - 1 - i ];
		s[len - 1 - i ]=aux;
	}
}

void main (){
	char saludo[]="Hola mundo!";
	invertir(saludo);
	printf("%s\n", saludo);
	return 0
}