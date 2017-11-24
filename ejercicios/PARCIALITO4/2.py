""" 2) Escribir una funci ́on recursiva que reciba una lista y un par ́ametro n, y devuelva otra
lista con los elementos de la lista replicados esa cantidad n de veces.
Por ejemplo, replicar ([1, 3, 3, 7], 2) debe devolver ([1, 1, 3, 3, 3, 3, 7, 7]) .
"""

def replicar(lista,n):
	"""..."""
	if lista == []:
		return []
	return [lista[0]]*n + replicar(lista[1:],n)

print(replicar([1, 3, 3, 7], 2))

