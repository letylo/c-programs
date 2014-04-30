#include <stdio.h>
#include <stdlib.h>

//La utilididad de malloc es darle un valor a un elemento para usarlo solo en el momento de la ejecución

int main(int argc, char *argv[]){

    int *puntero = NULL;

    puntero = (int *) malloc(sizeof(int)); //Se hace un upcasting 
    *puntero = 2; //Se le da un valor al puntero
    printf("%i\n", *puntero); //Se imprimer
    free(puntero); //Se libera el puntero

    return EXIT_SUCCESS;
}
