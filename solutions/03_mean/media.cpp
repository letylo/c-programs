#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int num;
    int media=0;
    int contador=0;

    do{	
    	printf("Numero: ");
        scanf(" %i", &num);
	if(num>=0){ 
          media+=num;
          contador++;
	}  
    }while(num>=0);
    
    media /= contador;
    printf("La media es: %i\n", media);
    return EXIT_SUCCESS;

}
