#include<stdio.h>
#include<stdlib.h>

#define N 70

int main(){

    int primes[N];
    primes[0] = 2;
    bool primes_found  = false;
    int contador=1;
    int tope;

    do{

    for(int possible_prime = 3; possible_prime<tope; possible_prime++){

   	 for(int possible_divisor=2; possible_divisor<possible_prime; possible_divisor++){
		if(possible_prime % possible_divisor != 0)
	   	    primes_found = true;
		else
		    break;
    
        if(primes_found == true){
        	primes[contador] = possible_prime;
	        contador++;
        }
	
	}

    }
    
    }while(tope<N);
    
    printf("%i ", primes[contador]);
    primes_found = false;

    return EXIT_SUCCESS;
}
