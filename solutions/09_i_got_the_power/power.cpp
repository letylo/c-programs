#include<stdio.h>
#include<stdlib.h>

#define N 0x10

int power(int base, int exponente){
    
    int resultado = base;
    
    if(base==1)
	return 1;
    else{
	for(int multiplicar=1; multiplicar<exponente; multiplicar++)
	    resultado *= base;
	return resultado;
    }
}

void fill_in(int list[N], int exponente){

    for(int guardar=0; guardar<N; guardar++)
	list[guardar] = power(guardar+1, exponente);
}

int main(int argc, char *argv[]){

    int list[N];
    int exponente=atoi(argv[1]);

    fill_in(list, exponente);

    for(int i=0; i<N; i++)
	printf("%i \n", list[i]);

    return EXIT_SUCCESS;
}
