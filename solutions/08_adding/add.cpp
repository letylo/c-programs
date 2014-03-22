
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    double resultado = 0;

    for(int argument=1; argument < argc; argument++)
      resultado += atof(argv[argument]);

    printf("%.2lf\n", resultado);

    return EXIT_SUCCESS;

}
