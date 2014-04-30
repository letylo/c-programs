#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int *puntero = NULL;
    int cuantos = 0;
    int num;

    do{
	printf("Numero: ");
	scanf(" %i", &num);
	if(num >= 0){
	    cuantos++;
	    puntero = (int *) realloc(puntero, cuantos * sizeof(int));
	    puntero[cuantos - 1] = num;
	}
    }while(num >= 0);

    for(int i=0; i<cuantos; i++)
	printf("%i", puntero[i]);
    printf("\n");

    free(puntero);

    return EXIT_SUCCESS;
}
