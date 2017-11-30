"Algoritmos de ordenamiento"

--Seleccion--

In-Place

Tiempo
Peor caso: N(cuad)
Mejor caso: N(cuad)
Promedio: N(cuad)
Espacio: Cte

--Insercion--

In-Place

Tiempo
Peor caso: N(cuad)
Mejor caso: N
Promedio: N(cuad)
Espacio: Cte

--MergeSort--
(ordenamiento recursivo)

not In-Place
Lo divido en dos, los recorro a los dos y los comparo

Tiempo
Peor caso: N.log2(N)
Mejor caso: N.log2(N)
Espacio: N

--QuickSort--
(ordenamiento recursivo)

In-Place
Pivot! Y divido listas, las divido los menores de un lado de el pivot y los mayores de el otro lado.
Recursivamente realizo lo anterior hasta que me quede 1 elemento.
Y despues appendeo todo

Tiempo
Peor caso: N(cuad)#Dependiendo de donde elija el pivot, si elijo el elemento mas chico, y si esta ordenado.
Mejor caso: N.log2(N)
Promedio: N.log2(N)
Espacio: Cte 


--------------------------------------------------------------------------------------------

"MergeSort"


def mergesort(L):
	if len(L)<2:
		return L
	medio=len(L)//2#Me da un numero, el medio de la lista
	izq=mergesort(L[:medio])
	der=mergesort(L[medio:])
	return merge(izq,der)

def merge(lista1,lista2):
	i, j = 0, 0
	resultado = []
	while(i < len(lista1) and j < len(lista2)):
	#Mientras no haya terminado de recorer ninguna de las dos listas
		if (lista1[i] < lista2[j]):
			resultado.append(lista1[i])#Elemento de la lista 1 es menor que la lista 2
			i += 1#Incremento a i para que no entre en el while
		else:
			resultado.append(lista2[j])#Elemento de la lista 2 es menor que la lista 1
			j += 1

	# Agregar lo que falta
	resultado += lista1[i:]
	resultado += lista2[j:]
	return resultado

"""
Tiempo, como lista1 y lista2 tienen n elementos.
Merge: Hay un solo ciclo que depende unicamente de la cantidad de elementos en la lista
Mergesort: Funcion recursiva y depende tambien de Merge(T:cte)
		   Lo que tarda las llamadas recursivas con (N/2) y Merge

	T(N)= 2(T(N/2))+T(Merge)

	T(N)= b N . a log2(N)

"""

"QuickSort"


def quick_sort(lista):
		"""Ordena la lista de forma recursiva.
	Pre: los elementos de la lista deben ser comparables.
	Post: la lista está ordenada. """
	_quick_sort(lista, 0, len(lista) - 1)

def _quick_sort(lista, inicio, fin):
	"""Función quick_sort recursiva.
	Pre: los índices inicio y fin indican sobre qué porción operar.
	Post: la lista está ordenada."""
	if inicio >= fin:
		return
	menores = _partition(lista, inicio, fin)
	_quick_sort(lista, inicio, menores - 1)
	_quick_sort(lista, menores + 1, fin)
def _partition(lista, inicio, fin):
	"""Función partición que trabaja sobre la misma lista.
	Pre: los índices inicio y fin indican sobre qué porción operar.
	Post: los menores están antes que el pivote, los mayores después.
	Devuelve: la posición en la que quedó ubicado el pivote."""
	pivote = lista[inicio]

	menores = inicio
	# Ubicar menores a la izquierda, mayores a la derecha
	for i in range(inicio + 1, fin + 1):
		if lista[i] < pivote:
			menores += 1
			if i != menores:
				_swap(lista, i, menores)
			# Ubicar el pivote al final de los menores
			if inicio != menores:
				_swap(lista, inicio, menores)
	return menores

def _swap(lista, i, j):
	"""Intercambia los elementos i y j de lista."""
	lista[j], lista[i] = lista[i], lista[j]
