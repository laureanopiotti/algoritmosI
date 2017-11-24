/* 
<> n mayor o menor 
= n felicitar
*/

void magia(int n) {
	int intentos = 0;
	int numero;
	char entrada[4];
	//while(True) {
	do {
		fgets(entrada,4,stdin);
		numero = atoi(entrada);
		intentos++;
		if(numero > n)
			printf("El numero que buscas es menor");
		elseif(numero < n)
			printf("El numero que buscas es mayor");

	}
	while (numero != n);
	printf("Felicitaciones, tardaste %d intentos",intentos)
}