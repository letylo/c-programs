#include<stdio.h>
#include<stdlib.h>

#define N 70

int main(){

    int primes[N];
   // primes[0] = 2;
    int primes_found = 1;

    int possible_prime = 3;
    int divisor = 2;

    for(int possible_prime=3; possible_prime<N; possible_prime++)
	if(possible_prime % divisor != 0){
	    possible_prime=primes[N];
	    printf(" %i\n", primes[N]);
	}

    return EXIT_SUCCESS;
}
