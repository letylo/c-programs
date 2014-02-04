#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int lado = 4;
    char caracter=atoi(argv[1]);

    for(int fila=0; fila<lado; fila++){
	for(int colm=0; colm<fila; colm++)
	    printf("%c", *argv[1]);
        printf("\n");
    }
    return EXIT_SUCCESS;
}
