#include <stdio.h>
#include <stdlib.h>

double fraction (double result){
 
    result = 1. / 2.;
    return result * 10;
}

int main (int argc, char *argv[]){

    double result;
    printf("%.2lf\n", fraction(result));

    return EXIT_SUCCESS;
}
