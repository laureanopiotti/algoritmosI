""" 
TP 3 

* --> desencola, imprime y encola

'\\' --> caracter barra

Fibo(0)=1
Fibo(1)=1
Fibo(n)=Figo(n-1)+Figo(n-2)

"""
def suma(l):
	if not l:
		return 0
	print (l)
	return l[0]+suma(l[1:])

# Otra manera

def suma(l):
	if len(l)==0:
		return 0
	return l[0]+suma(l[1:])

def fibonacci(n):
	if n == 0:
		return 1
	if n == 1:
		return 1
	return fibonacci(n-1)#HASTA NO DEVOLVER SU VALOR, NO TOCA LA SIGUIENTE
	+fibonacci(n-2)#Una vez terminado el anterior, llama a esta funcion (Ver stack)

def fibonacci(n):
	if n == 0:
		return 1
	if n == 1:
		return 1
	return fibonacci(n-1)+fibonacci(n-2)#Una vez terminado el anterior, llama a esta funcion (Ver stack)

def fibonacci(n):
	if n == 0:
		return 1
	if n == 1:
		return 1
	n_2=0
	n_1=1
	for i in range(2,n):
		fibn= n_1+n_2
		n_2=n_1
		n_1=fibn
	return fibn
# log2(n)


"""Ejercicio 15.2. 
Escribir una función que simule el siguiente experimento: Se tiene una rata en
una jaula con 3 caminos, entre los cuales elige al azar (cada uno tiene la misma probabilidad), si
elige el 1 luego de 3 minutos vuelve a la jaula, si elige el 2 luego de 5 minutos vuelve a la jaula,
en el caso de elegir el 3 luego de 7 minutos sale de la jaula. La rata no aprende, siempre elige
entre los 3 caminos con la misma probabilidad, pero quiere su libertad, por lo que recorrerá los
caminos hasta salir de la jaula.
La función debe devolver el tiempo que tarda la rata en salir de la jaula."""

import random
def experimento():
	'''...'''
	camino=random.randint(1,3)
	if camino == 3:
		return 7
	if camino == 2:
		return 5+experimento()
	return 3+experimento()


def BusquedaBinaria(l,n):
	'''.....'''
	if not l:
		return False
	if l[len(l)//2]==n:
		return True
	if l[len(l)//2]<n:
		return BusquedaBinaria(l[len(l)//2:],n)
	return BusquedaBinaria(l[:len//2],n)
