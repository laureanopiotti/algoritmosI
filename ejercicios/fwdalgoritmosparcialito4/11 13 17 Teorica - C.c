Puntero

Un puntero es una variable que puede almacenar
una dirección de memoria.

Ejemplo

int i = 5; 	// i es un número entero / declaro y defino i
int *p; 	// p es un puntero a un entero / declaro p
p = &i; 	// p ahora contiene la dirección de memoria de i / Quiero guardar en p la direccion de i
// p "apunta a" i

printf("%p\n", p); //imprimir puntero


printf("%p, %p, %p", &i,   p,   &p);
				 // 0xA4, 0xA4, 0xA8
printf("%d, %d",   i, *p);
				// 5, 5

*p = 4; // modifico la variable i con el anti-puntero
printf("%d, %d", i, *p);
			   // 4, 4

---------------------------------------------------------------------------------------

&var : Operador de dirección
*var : Operador de indirección

El resultado de (p + x) es la dirección --> p + x * sizeof(*p) .

printf("%p, %p, %p, %p", valores,  p,  p+1,  p+2);
						// 0xA4, 0xA4, 0xA8, 0xAC

printf("%d", *(p+2), p[2]);
			  // 30, 30
//p[x] es equivalente a *(p + x)


---------------------------------------------------------------------------------------

CHAR 8 bits



char s[] = "hola"; // {'h', 'o', 'l', 'a', '\0'}

Para prescindir de informar la longitud de una cadena, se utiliza '\0'

'c'		//No es lo mismo las '' son para 1 solo caracter.
"Hola"  //Las "" son para una secuencia de caracteres.

printf("%u", sizeof(s)); // 5

// Requiere #include <string.h>
printf("%u", strlen(s)); // 4

char s1[] = "hola", s2[] = "chau";
//if (s1 == s2)
// ¡ERROR! estoy comparando los punteros
if (strcmp(s1, s2) == 0) {
// Compara caracter a caracter, <string.h>
}


strcmp(s1,s2)
s1 > s2 +
s1 = s2 0
s1 < s2 -



//Para imprimir una cadena
void imprimir(const char s[]) {
	for(int i = 0; s[i] != '\0'; i++) {
	//Variable, comparacion, incremento
	putchar(s[i]);
	}
}


---------------------------------------------------------------------------------------

Entrada del usuario.



import sys
sys.stdout.write("hola\n")
sys.stderr.write("Error\n")
s = sys.stdin.readline()


getchar() permite leer de a un caracter de stdin :


fgets() ofrece un comportamiento similar a input() :

char s[30];
fgets(s, 30, stdin);
// Recibe un puntero, un dato y el modulo. Ojo: la cadena incluye el '\n' y un '\0'


atoi() permite convertir una cadena a un entero
int n = atoi(s);
// Recibe un puntero.

---------------------------------------------------------------------------------------

Modularización

C permite compilar en objetos ( .o ) distintos fuentes ( .c ) por separado para luego enlazarlos en un único ejecutable.

Para esto, cada módulo debe conocer las funciones, tipos, etiquetas, etc. que ofrecen los módulos que utilizan.

Los archivos de encabezados ( .h ) contienen (principalmente) los prototipos, typedef s y #define s de los módulos existentes.

Por ejemplo, stdio.h contiene el prototipo de la función printf() , pero no su definición.

Para usar una función definida en otro módulo, se debe incluir ( #include ) el encabezado ( .h ) correspondiente, y luego enlazar el ejecutable con el archivo objeto ( .o ) que contenga la definición de esa función.
