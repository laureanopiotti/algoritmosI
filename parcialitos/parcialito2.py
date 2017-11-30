"""1. Escribir una función que reciba una cadena y devuelva una tupla con la palabra que tuvo mayor cantidad de apariciones,
y la cantidad de apariciones que tuvo. Si hay dos o más palabras con máxima cantidad de apariciones, devolver cualquiera
de ellas. La cadena contiene únicamente palabras y espacios. Ejemplo: "la cama la silla y la mesa." -> ("la",
3)."""

""" def maximas_apariciones(cadena):
	diccionario = {}
	palabras = cadena.split()
	for i in palabras:
		diccionario[i] = diccionario.get(i,0) + 1

	valor = 0
	clave = ""
	for i,j in diccionario.items():
		if j > valor:
			valor = j
			clave = i
	return clave,valor

print(maximas_apariciones("la cama la silla y la mesa.")) """

"""2. Se cuenta con un archivo en formato csv que guarda información de pasajes de avión, respetando la siguiente estructura:
fecha,destino,precio. Escribir una función que dada la ruta del archivo, devuelva un diccionario cuyas claves sean
cada uno de los destinos, y el valor asociado a cada clave una tupla (fecha, precio) con el pasaje más barato para
el destino."""

import csv 

"""def destinos(ruta):
	d = {}
	try:
		with open(ruta) as f:
			f_csv = csv.reader(f)
			for fecha,destino,precio in f_csv:
				if destino in d and precio < d[destino][1]:
					d[destino] = fecha,precio
				if destino not in d:
					d[destino] = fecha,precio

	except IOError:
		print('Problema con el archivo')

	return d """

def devolver_dic(archivo):  
    resultados={}  
    try:  
        with open(archivo) as f:  
            archivo_csv=csv.reader(f)  
            for fecha, destino, precio in archivo_csv:  
                if destino not in resultados:  
                    resultados[destino]=[fecha,int(precio)]  
                else:  
                    if int(precio) < resultados[destino][1]:  
                        resultados[destino]=[fecha,int(precio)]  
    except IOError:  
        print('Error al abrir archivo')  
    return resultados  


print(devolver_dic('asd.csv'))








