#include <stdio.h>
#include <stdlib.h>

#define N_ALUMNO 10

int main(int argc,char *argv[]){

    int nota;
    int media = 0;

    for(int numero_alumno=0; numero_alumno<N_ALUMNO; numero_alumno++){
	printf("Nota: ");
        scanf(" %i", &nota);
	media+= nota;
    }

    media /= N_ALUMNO;
    printf("La media es: %i\n", media);
    return EXIT_SUCCESS;
 
}
