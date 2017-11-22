"""Invetir una ListaEnlazada de forma recursiva"""

def invertir(self):
	"""..."""
	self.__invertir(None,self.prim)

def __invertir(self,ant,act):
	if act is None:
		self.prim = ant
		return
	invertir(act,act.prox)
	act.prox = ant
