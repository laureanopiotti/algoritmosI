/*
7) Escribir en C una programa que le solicite un numero entero al usuario y muestre por
pantalla si el numero ingresado es un numero primo o no.

*/

#include <string.h>
#include <stdio.h>

#define TAM 50

int main() {
	char ingreso[TAM];
	printf("Ingrese un numero: ");
	fgets(ingreso,TAM,stdin);
	int numero = atoi(ingreso);
	if ingreso % 2 //PAJA
}