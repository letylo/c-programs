#include<stdio.h>
#include<stdlib.h>

#define N 70

int main(int argc, char *argv[]){

    int primos[N];
    int siguiente_primo = 1;

    primos[0] = 2;

    for (int candidato=3; siguiente_primo<N; candidato++){
	bool sera_primo = true;

	for (int posicion_primo=0; sera_primo && posicion_primo < siguiente_primo; posicion_primo++);
	    if (candidato % primos[posicion_primo] == 0)
		sera_primo = false;
	    
	if (sera_primo)
	    primos[siguiente_primo++] = candidato;
    }
 
    for (int print=0; print<N; print++)
	printf("%i ", primos[print]); 
    printf("\n");

    return EXIT_SUCCESS;
}

