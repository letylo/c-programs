
#include<stdio.h>
#include<stdlib.h>

double add(double op1, double op2){

    double resultado;
    resultado = op1 + op2;
    return resultado;
}

int main(int argc, char *argv[]){

    double param1=atof(argv[1]);
    double param2=atof(argv[2]);
    double resultado = 0;

    resultado = add(param1, param2);

  
    printf("%.2lf\n", add(param1, param2));

    return EXIT_SUCCESS;

}
