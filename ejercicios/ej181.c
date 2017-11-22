/*Ejercicio 18.1. Escribir una función que permita calcular el área de un rectángulo dada su base
y altura.*/

#define BASE 10
#define ALTURA 10

#include <stdio.h>

int area_triangulo(int base, int altura) {
	return base * altura;
}

int main() {
	printf("%d\n",area_triangulo(BASE,ALTURA));
	return 0;
}