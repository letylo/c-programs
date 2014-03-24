#include<stdio.h>
#include<stdlib.h>

#define N 70

int main(int argc, char *argv[]){

    //Crear el array
    int primes[N];
    int primes_found=1;
    int possible_prime = 3;
    bool divisor = false;
    primes[0]=2;

    while(primes_found != N)
	for(int divisor=2; divisor<possible_prime; divisor++){
	    possible_prime++;
	    for(int possible_prime=3; possible_prime<primes_found; possible_prime++)
		primes_found++;
	}
    if(primes_found==N)
	primes[possible_prime];
     
    //Mostrar por pantalla los numeros primos
        printf("%i ", primes[possible_prime]);
    printf("\n");

	return EXIT_SUCCESS;
}
