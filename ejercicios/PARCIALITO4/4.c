 
Laureano Piotti <laureanopiotti@gmail.com>
4:20 PM (1 hour ago)

to fiuba-7540rw-a. 
Hola,

a) ¿Como deberia ser un arreglo con numeros del 1 al 10 para obtener la peor performance en una implementacion de quicksort que elige siempre como pivote al ultimo elemento de la lista en vez del primero? Justifique.

Mi duda es: el peor caso de quicksort siempre es en donde una de las listas (mayores o menores) queda vacia dependiendo el pivote. En este caso, lo peores casos son cuando esta ordenado del 1 al 10 Y tambien cuando esta ordenada pero al reves (osea del 10 al 1) teniendo en cuenta que toma como pivote el ultimo? Y ademas tambien seria lo mismo si el pivote es el primero de la lista no?

b) ¿Que metodo de ordenamiento elegiria para ordenar ascendentemente un arreglo que ya est ́a ordenado pero en forma descendente? ¿Por qu ́e?. Asumiendo que fueran muchos elementos,¿elegir ́ıa este m ́etodo de ordenamiento o utilizar ́ıa una funci ́on para invertirlos in- place (en elmismo arreglo)?

Este me tiene confundido, lo primero que pense fue seleccion, aunque recorreria la lista igual aun ya sabiendo que el proximo es el mas grande. Teniendo en cuenta ese caso, usaria merge sort, que seria el mas "rapido" pero finalmente creo que elegiria invertir la lista in-place como mi primera eleccion. Esta bien?

Federico Esteban <fede.est@gmail.com>
4:38 PM (1 hour ago)

a) Sí. El enunciado pide un ejemplo, vos mencionaste dos posibles, con que menciones uno está bien.

b) Sí.
