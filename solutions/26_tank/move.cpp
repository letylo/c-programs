#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define TIME .1

struct TCoordenada{
    double x;
    double y;
};

struct TMovil{
    struct TCoordenada punto;
    struct TCoordenada velocidad;
    struct TCoordenada aceleracion;
};

void muestra(struct TMovil datos){
    printf("Pos: (%.2lf, %.2lf)\t", datos.punto.x, datos.punto.y);
    printf("Vel: (%.2lf, %.2lf)\t", datos.velocidad.x, datos.velocidad.y);
    printf("Ace: (%.2lf, %.2lf)\t", datos.aceleracion.x, datos.aceleracion.y);
}

void pintar(struct TMovil movil){
    mvprintw(20 - movil.punto.y, movil.punto.y, "0");
    refresh();
}

int main(int argc, char *argv[]){

    struct TMovil proyectil = {
	{10, 0},
	{0, 0},
	{0, -10}
    };
       
    printf("Velocidad Inicial (vx, vy): ");
    scanf(" %lf,%lf",
	  &proyectil.velocidad.x,
	  &proyectil.velocidad.y);

    initscr();
    clear();

     while(proyectil.punto.y >= 0){
	 pintar(proyectil);

	//Calculamos la velocidad y la posición

	proyectil.velocidad.x += proyectil.aceleracion.x * TIME;
	proyectil.velocidad.y += proyectil.aceleracion.y * TIME;

	proyectil.punto.x += proyectil.velocidad.x * TIME;
	proyectil.punto.y += proyectil.velocidad.y * TIME;
     }

     getchar();
     endwin();

     return EXIT_SUCCESS;
}
