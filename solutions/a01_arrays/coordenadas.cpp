#include <stdio.h>
#include <stdlib.h>

#define N 8

//esta funcion enseña un array por pantalla
void show_me(int a[N][N]){

    for (int fila=0; fila<N; fila++){
       	 for (int col=0; col<N; col++)
	     printf("%3i", a[fila][col]); //el 3 al lado de i hace que se deje 3 espacion entre cada entero
	 printf("\n");
    }
}

int main (int argc, char *argv[]){

    int inicial = 0;
    int a[N][N];

    for (int fila=0; fila<N; fila++){
	for (int col=0; col<N; col++)
	    a[fila][col] = ++inicial;
    }

    //a[4][5] = c (asi se dice que en la fila 4 col 5 hay una c)
    show_me(a);

    return EXIT_SUCCESS;
}
