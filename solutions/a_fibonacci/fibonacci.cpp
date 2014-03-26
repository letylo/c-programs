#include <stdio.h>
#include <stdlib.h>

#define N 20

int main (int argc, char *argv[]){

    int secuencia[N];
    int num_anterior=0;
    int num_previo=1;
    int result;

    for (int contador=0; contador<N; contador++){
         result = num_anterior + num_previo;	
	 num_anterior = num_previo;
         num_previo = result;
         secuencia[contador] = result;
    }

    for (int print=0; print<N; print++)
	printf("%i ", secuencia[print]);
    printf("\n");
   
    return EXIT_SUCCESS;
}
