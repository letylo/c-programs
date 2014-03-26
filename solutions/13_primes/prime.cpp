#include<stdio.h>
#include<stdlib.h>

#define N 70

int main(int argc, char *argv[]){

    int primos[N];
    primos[0]=2;
    int siguiente_primo;
    int primos_anteriores;


    for (int primos_anteriores=2; primos_anteriores<N; primos_anteriores++){
	for (int candidato=3; siguiente_primo<N; candidato++){
	    if (candidato % primos_anteriores != 0){
		bool es_primo = true;
		siguiente_primo++;
		primos[siguiente_primo] = candidato;
	    }
	}
    }

    for (int print=0; print<N; print++)
	printf("%i ", primos[print]); 
    printf("\n");

    return EXIT_SUCCESS;
}

