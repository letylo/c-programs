#include<stdio.h>
#include<stdlib.h>

#define N 70

int main(){

    int primes[N];
    int possible_prime;
    bool primes_found = false;
    int divisor;

    primes[0] = 2;

    for(int possible_prime=0; possible_prime<N; possible_prime++)
	if(possible_prime % divisor != 0){
	    primes_found  = true;
	    possible_prime=primes[N];
	    printf(" %i\n", primes[N]);	}

    return EXIT_SUCCESS;
}
