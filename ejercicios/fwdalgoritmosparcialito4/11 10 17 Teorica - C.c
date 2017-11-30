Preprocesador(Reemplaza variables, y copypaste de archivos)

#include <stdio.h>
#include <foo.h>
Include(Copypaste) --> parecido al import


#define A 2
manera de definir variables.


Void --> no devuelve nada

---------------------------------------------------------------------------------------------------

Compilador
Pasa todo a codigo binario.

---------------------------------------------------------------------------------------------------

Enlazador
gcc -o foo.exe foo.o
enlaza las bibliotecas con el codigo y le da funcion a todo el codigo.	

int main() {
	printf("Hola mundo\n");
	return 0;
}


Todo tiene que estar declarado antes de usarlo.
Tanto funciones como variables, las funciones si una llama la otra, tiene que estar definida la funcion antes de que la llame
-------------------------------------------------------------------------------------------------------
Las variables pueden ser constantes, no se pueden modificar, en ningun momento.		

//Guarda la constante float en memoria.
const float PI=3.14159

//Es lo mismo que pero no gasta memoria.
#define PI=3.14159


typedef unsigned char edad_t;
...
edad_t edad_juan = 23;

Cada vez que veas una variable asi, guardame esto en esta variable.

-------------------------------------------------------------------------------------------------------

printf("Hola %s, tienes %d mensajes\n", "Alan", 5);

%  --> interpretado como
%c --> char (un caracter)
%s --> char * (cadena)
%d --> int
%f --> float
%% --> %
%u --> unsigned

No existen bools
C todo es un numero. 
0 False
1 True

#include <stdbool.h>
...
bool condicion = true;


-------------------------------------------------------------------------------------------------------

x == y : Igualdad

x != y : No igualdad

x && y : And

x || y : Or

!x : Not

< , > , <= , >=

-------------------------------------------------------------------------------------------------------
-FOR-
for (inicializacion; condicion; incremento) {
<BLOQUE>
}

for (int i = 0; i < 10; i++) {
printf("%d\n", i);
}

-WHILE-
while (condicion) {
<BLOQUE>
}


-DO WHILE- (Parecida al while, el bloque lo ejecuta de prepo por lo menos 1 vez, y despues se repite si el WHILE se cumple.)
do {
<BLOQUE>
} while (condicion);


-SWITCH-(NO ES UN ITERADOR, es como un if elif else)
<If = case / Else = default >
-------------------------------------------------------------------------------------------------------

int valores[4] = {10, 20, 32, 40};//Arreglo de C(Lista) 
//			|Cantidad de elementos
valores[2] = 30;
//Asignamos en la celda 2, el valor 30
valores[4] = 5;
//Asignamos en la celda 4, el valor 5 pero tira error porque no tiene memoria para asignar ese valor.




int valores[] = {10, 20, 30, 40, 50};
printf("%d, %d", sizeof(int), sizeof(valores)); 
// 					|4, 			|20 			(5 * sizeof(int)<4>)
printf("%p", valores); 
// 0xA4
printf("%p", valores + 2); 
// 0xAC (0xA4 + 2 * sizeof(int) = 0xAC)

