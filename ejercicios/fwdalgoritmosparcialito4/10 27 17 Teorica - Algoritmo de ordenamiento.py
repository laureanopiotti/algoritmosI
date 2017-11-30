"Algoritmo de ordenamiento"

def seleccion(L):
	# Para seleccion tener en cuenta buscar_max, swap, in-place.

	"""Recibe una lista de elementos. 
	Modifica la lista que recibe - in place- No devuelve una nueva lista.
	Swap
	"""
	n=len(lista)-1
	while n > 0:
		mx=buscar_max(lista,0,n)
		lista[mx],lista[n]=lista[n],lista[mx]
		n-=1
def buscar_max(lista,a,b):
	mx=l[a]
	p=0
	for i in range(a+1,b+1):
		if L[i] > mx
		mx=L[i]
		p=i

	return p
#T(n)= cuadratico




def insercion(L):
	for i in range (len(L)-1):
		if L[i+1]<L[i]:
			reubicar(L,i+1)

def reubicar(lista, p):
 """Reubica al elemento que está en la posición p de la lista
 dentro del segmento [0:p-1].
 Pre: p tiene que ser una posicion válida de lista."""

	v = lista[p]

# Recorrer el segmento [0:p-1] de derecha a izquierda hasta
# encontrar la posición j tal que lista[j-1] <= v < lista[j].
	j = p
	while j > 0 and v < lista[j - 1]:
# Desplazar los elementos hacia la derecha, dejando lugar
# para insertar el elemento v donde corresponda.
		lista[j] = lista[j - 1]
		j -= 1
	lista[j] = v


#Bucle anidados (N ** cant bucles)
#T(n)= depende de como este en cada caso
#T(n) mejor caso= lineal
#T(n) peor caso= cuad
