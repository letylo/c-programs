#include <stdio.h>
#include <stdlib.h>

int factorial (int n){

    if (n <= 0)
	return 1;
    return n * factorial(n - 1);
}

double e (int n_terms){

    if (n_terms < 0)
	return 0;
    return 1. / factorial(n_terms) + e(n_terms - 1);
}

int main (int argc, char *arvg[]){

//Hacer inversa de un numero y sumarla con la anterior 10 veces

    printf("%lf\n", e(10));

return EXIT_SUCCESS;
}
