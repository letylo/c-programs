#include<stdio.h>
#include<stdlib.h>

#define N 70

int main(){

    int primes[N];
   // primes[0] = 2;
    int possible_prime;
    int divisor = 2;
    bool primes_found = false;


    for(int possible_prime=3; possible_prime<N; possible_prime++)
	if(possible_prime % divisor != 0){
	    primes_found  = true;
	    possible_prime=primes[N];
	    printf(" %i\n", primes[N]);
	}

    return EXIT_SUCCESS;
}
