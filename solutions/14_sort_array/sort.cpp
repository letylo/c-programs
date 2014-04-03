#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]){

    int a[] = {22, 3, 77, 50, 40, 23, 37, 35, 22, 2, 61, 71, 0};
    int size;
    int aux;
  
    size = sizeof(a) / sizeof(int);
   
    for (int recorrer=0; recorrer<size; recorrer++){
	for (int comparar=recorrer+1; comparar<size; comparar++)
	    if (a[recorrer] > a[comparar]){
		aux = a[comparar];
		a[comparar] = a[recorrer];
		a[recorrer] = aux;
	    }
    }
    for (int i=0; i<size; i++)
         printf("%i ", a[i]);    
    
    return EXIT_SUCCESS;
}
