#Modulos necesarios para la ejecución del programa
import os
import re
import datetime

#Expresion para cerrar el programa
END = "*"
#Expresion para mostrar opciones
OPT = "/"
	
def indexar():
	"""Primera etapa de la ejecucion del programa. Analiza los archivos y subdirectorios del paso donde se ejecutó el programa. 
	Genera un indice en el cual las claves son el termino (ruta o contenido) y los valores son el path donde se encuentra cada clave. 
	Al finalizar la ejecucion devuelve el indice (de tipo diccionario) y la cantidad de archivos"""
	
	#Creacion del diccionario vacio
	indice = {}
	
	#Cantidad de archivos indexados
	cantidad_archivos = 0
	
	#Recorro el directorio actual "."
	for ruta, directorios, archivos in os.walk("."):
		
		#Sumo al contador de archivos cuantos directorios y archivos hay
		cantidad_archivos += len(directorios) + len(archivos)

		#Separo los archivos de texto encontrados
		archivos_texto = []
		for archivo in archivos:
			if archivo.endswith(".txt") or archivo.endswith(".md") or archivo.endswith(".py") or archivo.endswith(".c"):
				archivos_texto.append(archivo)
				
		#Indexo en el indice cada términos del contenido de cada archivo de texto encontrado y su valor será el path donde se encuentra
		for archivo in archivos_texto:
			try:
				with open(os.path.join(ruta,archivo)) as f:
					terminos = re.split('\W+','\n'.join(f.readlines()))
			except IOError:
				print("Error de entrada/salida")
			
			#Convierto cada elemento de la lista términos a minuscula modificando la misma lista
			a_minuscula(terminos)
			#Agrego al indice
			for termino in terminos:
				agregar_al_indice(termino,indice,ruta,archivo)
				
		#Formo una nueva lista de terminos que seran la ruta y los nombres de los archivos formateadas segun la consigna
		terminos = []
		terminos.extend(re.split('\W+',str(archivos)))
		terminos.extend(re.split('\W+',str(ruta)))

		#Convierto cada elemento de la lista términos a minuscula modificando la misma lista
		a_minuscula(terminos)		
		
		#Recorro los terminos. Si el termino esta en la ruta entonces indexeo como valor del termino todos los pasos con los archivos dentro de esa ruta.
		for termino in terminos:
			if termino in ruta:
				for archivo in archivos:
					agregar_al_indice(termino,indice,ruta,archivo)
		#Si el termino no esta en la ruta, me fijo con que archivo matchea el termino e indexeo el termino como clave y la ubucacion del archivo como valor.
			else:
				for archivo in archivos:
					if termino in archivo:
						agregar_al_indice(termino,indice,ruta,archivo)
			
	#Devuelvo el indice y la cantidad de archivos indexados
	return indice, cantidad_archivos
	
def a_minuscula(lista):
	"""Convierte cada elemento de una misma lista a minuscula"""
	for i in range(len(lista)):
		lista[i] = lista[i].lower()
	
def agregar_al_indice(termino,indice,ruta,archivo):
	"""Recibe un termino, una ruta y un archivo y un indice.
	Agrega al indice como termino con su ubicacion como valor"""
	indice[termino] = indice.get(termino,[]) + [os.path.join(ruta,archivo)]
							
def main():
	"""Segunda etapa del programa y función que interactua con el usuario."""

	#Bienvenida
	now = datetime.date.today()
	print("Fecha: ",now,)
	print("Developer: Laureano Piotti")
	print()
	#Ejecutar la funcion que realiza el index y avisar al usuario que se esta realizando el indexado
	print("Indexando archivos...")
	indice,cantidad_archivos = indexar()
	print("Listo! {} archivo(s) indexados.".format(cantidad_archivos))
	print()
	print(">>>Bienvenido al buscador de archivos.")
	print()
	print(">>>Si necesitas ayuda, ingresá /.")
	print()
	print(">>>Si deseas salir, ingresá *")
	#Mostrar prompt para que el usuario ingrese uno (o varios) terminos
	ingreso_usuario = input(">")
	
	while True:

		if ingreso_usuario == END:
			break
		
		if ingreso_usuario == OPT:
			instrucciones()

		elif ingreso_usuario == '':
			print("Por favor ingrese uno o varios terminos")
				
		else:
			lista_encontrados = busqueda(ingreso_usuario,indice)
			if lista_encontrados == []:
				print("No hay concidencias")
			for elementos in lista_encontrados:
				print(elementos)
		
		ingreso_usuario = input(">")


def busqueda(valor,indice):
	"""Recibe el indice donde buscará los path de cada valor recibido por parametro.
	Devuelve una lista con los path de los terminos ingresados"""
	
	#Busqueda [NOT]
	#El valor ingresado debe empezar con esta variable
	NOT = "NOT:"
	if valor.startswith(NOT):
		valor = valor[4:]
		#Le saco espacios a la cadena que pueden romper el codigo
		valor = valor.strip()
		archivos = indice[valor]
		resultado = []
		for lista_pasos in indice.values():
			for paso in lista_pasos:
				if paso not in archivos and paso not in resultado:
					resultado.append(paso)
		return resultado
		
	#Busqueda [AND]
	#El valor ingresado debe empezar con esta variable
	AND = "AND:"
	if valor.startswith(AND):
		valor = valor[4:]
		#Spliteo los terminos ingresados por el usuario en una lista
		terminos = valor.split()
		
		#Junto todos los pasos en una misma lista verificando que esten en la lista
		aux = []
		for termino in terminos:
			if termino in indice:
				aux.extend(indice[termino])
		
		#Agarro cada paso y me fijo si esta la misma cantidad de veces como terminos ingresados
		resultado = []
		for paso in aux:
			aux2 = 0
			for termino in terminos:
				if termino in indice:
					if paso in indice[termino]:
						aux2 += 1
			if aux2 == len(terminos) and paso not in resultado:
				resultado.append(paso)
		return resultado
		
	#Busqueda [OR]
	#El valor ingresado debe empezar con esta variable
	OR = "OR:"
	if valor.startswith(OR):
		valor = valor[3:]				
	#Si no entra en ninguna de las busquedas especiales:
	#Spliteo los terminos ingresados por el usuario en una lista
	terminos = valor.split()
		
	resultado = []
	for termino in terminos:
		if termino in indice:
			for paso in indice[termino]:
				if paso not in resultado:
					resultado.append(paso)
	return resultado
	
def instrucciones():
	"""Muestra instrucciones que ayudaran al usuario cómo ingresar el input"""
	print()
	print("RECORDÁ... Para salir, ingresa {}".format(END))
	print()
	print("INSTRUCICONES:")
	print()
	print("""[Búsqueda OR]
En caso de introducir un término, se listarán los archivos que coinciden con el mismo

En caso de introducir más de un término, se listarán los archivos que coinciden
con al menos uno de los términos

Por consistencia, también se puede introducir como consulta la palabra clave
OR: y luego la lista de términos para obtener el mismo resultado""")
	print()
	print("""[Búsqueda AND]
En caso de introducir la palabra clave AND: más varios términos, se
listarán los archivos que coinciden con todos los términos""")
	print()
	print("""[Búsqueda NOT]
En caso de introducir la palabra clave NOT: seguido de un término, se listarán
los archivos que no coinciden con el término""")

	
main()
