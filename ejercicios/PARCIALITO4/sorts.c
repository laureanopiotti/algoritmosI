/* 3 1 2 4 5 6 7 8 9 10 

t(n) --> insercion
t(nlog(n)) --> merge sort

1) Escribir una funci ́on merge sort 3 que implemente un algoritmo similar al de merge sort
pero que en lugar de dividir los valores en dos partes iguales, los divida en tres. Considerar que
se cuenta con la funci ́on merge(lista 1, lista 2, lista 3)). ¿C ́omo te parece que se va a
comportar este m ́etodo con respecto al merge sort original?

MS tres:
	if len(lista) < 2

	if len(lista) == 2
		if prim > ult:
			swap(prim,ultimo)

*/

def merge_3(lista)
	"""___"""
	if _____
	if _____
	lista_1 = merge_3(lista[:len(lista)/3])/ [0:len/3]
	lista_2 =								[len/3:2*len/3]
	lista_3 = 								[2*len/3:]
	return merge_3(lista_1,lista_2,lista_3)
