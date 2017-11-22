#include <stdio.h>


int main() {
	char *hola = "Hola";
	printf("%s\n",hola);
	//char *gg = ++hola;
	//printf("%s\n",gg);
	//char *lol = ++gg;
	//printf("%s\n",lol);
	char *lala = hola + 1;
	printf("%s\n",lala);
	//char *lola = +++gg;
	//printf("%s\n",lola); //no funca asi
}
