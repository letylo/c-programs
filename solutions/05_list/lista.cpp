#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    const char *list[] = {
	"bread",
	"toast",
	"bacon",
	"eggs",
	"meat",
    };

    int palabras=sizeof(list)/8;

    for(int veces=0; veces<palabras; veces++)
	printf("%s \n", list[veces]);

    printf("\nLa lista tiene %i palabras\n", palabras);

    return EXIT_SUCCESS;
}



