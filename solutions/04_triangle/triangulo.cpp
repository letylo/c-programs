#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int lado = 4;
    char caracter= *argv[1];

    for(int fila=0; fila<lado; fila++){
	for(int colm=0; colm<lado; colm++)
	    if(fila>=colm)
	    	printf("%c", caracter);
	    else 
		printf(" ");
        printf("\n");
    }
    return EXIT_SUCCESS;
}	
