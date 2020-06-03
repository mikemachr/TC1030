Este programa toma como base la actividad inicial diseño orietnado a objetos, a diferencia de esta, ahora se desea hacer el juego
parametrizable. 

La clase dado, asi como el archivo Dado.h no sufrieron ningun cambio ni en su estructura ni en su implementacion respecto a la actividad
anterior. 

La manera en la cual inclui el concepto de herencia fue: crear una clase base, la cual contiene los data members y member functions que
se usan en las 2 clases derivadas: TypeA y TypeM. Cabe aclarar que fuera de los respectivos constructores no hay ningun data member ni member 
function creada en especifico para ninguna de las 2 clases derivadas. La clase base MyGame, es meramente abstracta pues no tiene constructores, 
y no es posible instanciarla directamente, pero por medio de polimorfismo se pueden tratar instancias de TypeM y TypeA como objetos tipo 
MyGame. 

El concepto de polimorfismo es usado en 2 puntos, la member function play, es una funcion pura virtual, la cual se comporta de una manera
casi identica en TypeA y en TypeM, con la diferencia de que en TypeA, esta corre de manera automatica, mientras que en TypeM requiere
intervencion del usuario, y al final de la ejecución del código main, donde se crea un apuntador de tipo MyGame, que contiene las instancias
de las clases TypeA y TypeM. Sabemos que el polimorfismo fue exitoso por que el apuntador es aceptado y no hay errores de ejecución. 

Cada clase derivada tiene 2 constructores, el por defecto que se llama cuando el usuario no desea personalizar el juego, y el 
parametrizado, que se ajusta a las decisiones del usuario. Debido a que se desconoce el tamaño del tablero asi como el numero de 
jugadores, se opto por el uso de vectores, pues el tamaño de estos puede ser modificado despues de haber sido creados, a diferencia
de los arrays. Los vectores se usan en varios puntos, hay un vector que guarda el nombre de los jugadores, uno que guarda sus posiciones, 
y el tablero de juego en si mismo es un vector. 

La funcion play es de tipo int en ambas clases derivadas, pero esto no es por que se requiera el valor que retornan, si no por que buena
parte de la ejecución del programa sucede dentro de ciclos anidados, por lo que para detener la ejecución de la misma, un break no era 
suficiente, asi que se usa un return, cuyo valor es arbitrario.