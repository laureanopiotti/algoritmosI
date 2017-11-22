#include <stdio.h>
//#include <string.h>

int strlen(const char *s) {
	int len = 0;
	for(int i = 0; s[i] != '\0'; i++) {
		len ++;
	}
	return len

}

int main() {
	char *s = "Hola mundo!";
	int len = strlen(s);
	printf("La long de s es: %d\n",len);
	return 0;
}
