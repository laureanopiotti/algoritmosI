/*
Ejercicio 18.2. Escribir una función que reciba un número entero n y calcule el factorial de n.
a) En forma iterativa.
b) En forma recursiva.
*/

#include <stdio.h>

int factorial(int n) {
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main() {
	printf("%d\n",factorial(5));
	return 0;
}
