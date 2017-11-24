"""Ejercicio 15.4. Escribir una funcion recursiva que reciba como parámetros dos strings a y b, y
devuelva una lista con las posiciones en donde se encuentra b dentro de a.
Ejemplo:
>>> posiciones_de("Un tete a tete con Tete", "te")
[3, 5, 10, 12, 21]"""


def posiciones_de(a,b):
	"""..."""
	resultado = []

	if len(a) < len(b):
		return resultado

	if a[:len(b)] == b:	
		resultado.append(len(a)-len(b))
	return resultado + posiciones_de(a[1:len(a)],b)

print(posiciones_de("Un tete a tete con Tete", "te"))

