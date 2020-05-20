Mi programa consta de 2 archivos, dado.h, en el cual se define la clase dado y sus metodos y snakes.cpp, que es el codigo 
principal. Este a su vez tiene la clase my game definida dentro.
Para cada turno, se crea un objeto llamado dado, el cual nos da su valor a traves de una member function get_roll.
Para compilarlo simplemente se debe usar g++, o cualuier otro compilador de C++, y correr el ejecutable snakes.exe. En mi caso, 
lo desarrollé y probé dentro de VScode. 

Dado que este juego tiene un numero no fijo de repeticiones, todo el codigo principal sucede dentro de un while(1), que solo se rompe
bajo 4 casos especificos, esto me evita tener un numero excesivo de validaciones.

Un objeto es creado en cada corrida de la member function play, pero como esta no devuelve un objeto si no un entero(el que obtenemos
con get_roll), la memoria no se satura de objetos innecesarios

