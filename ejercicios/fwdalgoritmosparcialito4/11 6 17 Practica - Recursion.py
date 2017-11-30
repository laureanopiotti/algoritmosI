"""
anitalavalatina
	alavala
	 laval
	  ava
	   v

"""
def es_palindromo(palabra):
	if len(palabra)<=1:
		return True
	if palabra[0] == palabra[-1]:
		return es_palindromo(palabra[1:-1])
	return False
#Achicar el problema a uno mas chico y asi poder hacerlo desde el caso base.
print(es_palindromo('anitalavalatina'))

def triangulo_de_pascal(i,j):
	"""
	   1
	  1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
 1 5 10 10 5 1
	"""
	if i==1 or j==1:
		return 1
	else:
		return triangulo_de_pascal(i-1,j-1)+triangulo_de_pascal(i-1,j)

print(triangulo_de_pascal(3,51129381238))



def invertir_cola(cola):
	if not cola.esta_vacia():
		return 
	#Me fijo cuando esta vacia para frenar la iteracion
	e=cola.desencolar()
	#Guardo la constante llamando otra funcion
	invertir_cola(cola)
	#Llamo devuelta a la funcion hasta que llegue al return
	cola.encolar(e)
	#Encolo la variable que habia guardado en el cuerpo
#Recursividad funciona como pila (HACER EL DIBUJITO)
