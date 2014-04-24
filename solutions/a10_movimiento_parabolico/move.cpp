#include <stdio.h>
#include <stdlib.h>

#define TIME .1
struct TCoordenada{
    double x;
    double y;
};

int main(int argc, char *argv[]){

    struct TCoordenada punto;
    struct TCoordenada velocidad;
    struct TCoordenada aceleracion;

    aceleracion.x = 0;
    aceleracion.y = -10;

    punto.x = 3;
    punto.y = 3;

    printf("Introduzca la velocidad en forma de par (x, y): \n");
    scanf(" (%lf, %lf)", &velocidad.x, &velocidad.y);

    while(punto.y >= 0){

	//Calculamos la velocidad

	velocidad.x += aceleracion.x * TIME;
	velocidad.y += aceleracion.y * TIME;

	//Calculamos la posicion

	punto.x += velocidad.x * TIME;
	punto.y += velocidad.y * TIME;

	printf("La piedra esta: (%.2lf, %.2lf)\n", punto.x, punto.y);
    }
    return EXIT_SUCCESS;
}
