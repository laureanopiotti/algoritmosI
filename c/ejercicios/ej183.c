/*Ejercicio 18.3. Escribir una función que reciba un arreglo de números y la cantidad de elemen-
tos, y devuelva el promedio.*/

#include <stdio.h>

#define CANT 5

float promedio(int v[], int cant) {
	float suma = 0;
	for(int i = 0; i < cant ; i++) {
		suma += v[i];
	}
	return suma/cant;
}

int imprimir_vector(int v[], int n) {
	printf("{-");
	for(int i = 0; i < n; i++) {
	printf("%d-", v[i]);
	}
	printf("}: ");
} 

int main() {
	int valores[CANT] = {5,6,8,10,12};
	printf("tiene como promedio entre sus elementos: %.2f\n",imprimir_vector(valores,5),promedio(valores,CANT));
	return 0;
}