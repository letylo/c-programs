#include <stdlib.h>
#include <stdio.h>

#define JUGADORES 4 //se define jugadores como 4


void reparte_siguiente(int *donde_mazo, int celda[JUGADORES]){

    static int posicion=0; //con static inicializo a 0, para que pueda actualizarse.

    (*donde_mazo)--; //la direccion de mazo se decrementa
    celda[posicion % JUGADORES]++; //para que se incremente la celda del array
    posicion++;
}

void muestra(int mazos[JUGADORES]){

    for(int i=0; i<JUGADORES; i++)
	printf("Jugador %i: %i cartas.\n", i+1, mazos[i]);
    printf("\n");
}

int main(int argc, char *argv[]){

    //pide al usuario un numero
    int mazo = atoi(argv[1]);

    //crea un array de 4 celdas
    int jugadores[JUGADORES];

    //creamos un bucle para eliminar basura informatica
    for(int i=0; i<JUGADORES; i++)
	jugadores[i] = 0;

    //mientras mazo sea mayor que 0 se reparten cartas
    while(mazo > 0)
	reparte_siguiente(&mazo, jugadores);  

    //muestra el resultado, llamando a la funcion muestra
    muestra(jugadores);     

    return EXIT_SUCCESS;
}
