#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

    //Se crea una lista de palabras.
    const char *list[] = {"yield", "yelp"}; 
    //strcmp ordena las palabras por orden alfabetico.
    int contador = strcmp(list[0], list[1]);

    if(contador<=0)
	printf("%s %s\n", list[0], list[1]);
    else
       printf("%s %s\n", list[1], list[0]);
 
    return EXIT_SUCCESS; 
}
