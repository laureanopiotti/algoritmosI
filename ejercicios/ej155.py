"""Ejercicio 15.5. Escribir dos funciones mutualmente recursivas par(n) e impar(n) que determinen
la paridad del numero natural dado, conociendo solo que:
• 1 es impar.
• Si un número es impar, su antecesor es par; y viceversa."""

def impar(n):
	if n == 1:
		return True
	return par(n-1)

def par(n):
	if impar(n):
		return False
	return True


print("ES PAR? 1",par(1))
print("ES PAR? 2",par(2))
print("ES PAR? 3",par(3))
print("ES PAR? 4",par(4))
print("ES PAR? 5",par(5))
print("ES PAR? 6",par(6))

print("ES IMPAR? 1",impar(1))
print("ES IMPAR? 2",impar(2))
print("ES IMPAR? 3",impar(3))
print("ES IMPAR? 4",impar(4))
print("ES IMPAR? 5",impar(5))
print("ES IMPAR? 6",impar(6))



