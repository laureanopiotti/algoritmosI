"""1. Dado el siguiente código en Python
for x in range(-33, 99, 7):
print("Valor al inicio de la iteracion:", x)
x = (x // 2) - 3
print("Valor al final de la iteracion:", x)
a. Hacer una tabla con los valores de x iniciales y finales de cada iteración. En caso de que el ciclo no termine nunca,
colocar una fila con “... ...”.
b. Transformar el ciclo anterior a un ciclo while que implemente el mismo comportamiento."""

"""def parcial_1():

	x = -33
	while x <= 99:
		aux = x 
		print("Valor al inicio de la iteracion",aux)
		aux = (x // 2) - 3
		print("Valor al final de la iteracion:",aux)
		x += 7

parcial_1()"""

"""2. El estilo de escritura snake_case permite representar un conjunto de palabras separándolas por un guión bajo, mientras
que el estilo CamelCase las representa sin separadores, utilizando letras mayúsculas para la primera letra de cada
palabra.
Se pide realizar una función que reciba una cadena escrita en snake_case y devuelva su representación en
CamelCase. Ejemplos: snake_a_camel(“alan_turing”) -> “AlanTuring”, snake_a_camel(“hoy_es_el_parcial”)
-> “HoyEsElParcial”."""


"""def snake_a_camel(cadena):
	lista_split = cadena.split("_")
	lista_resultado = []
	for i in lista_split:
		lista_resultado.append(i.capitalize())

	cadena_resultado = "".join(lista_resultado)
	return cadena_resultado

print(snake_a_camel("alan_turing"))

print(snake_a_camel("hoy_es_el_parcial")) """


"""3. Escribir una función que dada una matriz representada como una lista de listas de números (donde cada sublista
representa una fila), devuelva una lista con los máximos de cada columna. Ejemplo:


a. Ejemplo:
maximos_columnas([[1, 2, 8, 4],
[6, 7, 3, 3],
[6, 5, 4, 9]])
->
[6, 7, 8, 9]
"""
def maximos_columnas(matriz):
	"""..."""
	lista_maximos = []
	for i in range(len(matriz[0])):
		pos_max = matriz[0][i]
		for j in range(len(matriz)):
			if matriz[j][i] > pos_max:
				pos_max = matriz[j][i]
		lista_maximos.append(pos_max)
	return lista_maximos

print(maximos_columnas([[1, 2, 8, 4],
[6, 7, 3, 3],
[6, 5, 4, 9]]))


