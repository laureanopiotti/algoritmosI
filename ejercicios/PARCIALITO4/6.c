/*
6) Escribir en C un programa que pida al usuario un valor m ́ınimo, un valor m ́aximo y un
n ́
umero n, e imprima una tabla con los cuadrados de los n ́
umeros entre m ́ınimo y m ́aximo cada
n n ́
umeros. Por ejemplo (m ́ınimo = 0, m ́aximo = 17, n = 5) debe mostrar:
0 0
5 25
10 100
15 225

*/

int buscar_maximo(int arreglo[],int tam) {
	int max = arreglo[0]
	for(int i=1, i < tam, i++) {
		if (arreglo[i] > max) {
			max = arreglo[i];
		}
	}
	return max;
}