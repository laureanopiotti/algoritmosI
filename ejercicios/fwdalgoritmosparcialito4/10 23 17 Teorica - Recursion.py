Recursividad

Tiene que tener un caso base para no iniciar un bucle

Una funcion se llama a si misma.

Es de tiempo lineal o log 
Es de memoria lineal o log 
dependiendo de el caso


def fac(n):
	if n == 0:
		return 1
	return n*fac(n-1)

def pot (b,n):
	if n == 0:
	elif n%2==0: 
		p=pot(n//2)
		return p*p
	else:
		p=pot((n-1)//2)
		return p*p*b