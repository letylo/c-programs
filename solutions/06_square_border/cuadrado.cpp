#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    int h=atoi(argv[1]);

    if(argc<2){
	fprintf(stderr, "Usage: %s <altura del cuadrado>\n", argv[0]);
	return EXIT_FAILURE;
    }

    for(int fila=0; fila<h; fila++){
        for(int colm=0; colm<h; colm++)
	    if(fila==0 || colm==0 || fila==h-1 || colm==h-1)
		printf("*");
	    else
        	printf(" ");
        printf("\n");    

    }
    return EXIT_SUCCESS;

}
