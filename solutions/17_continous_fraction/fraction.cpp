#include <stdio.h>
#include <stdlib.h>

double fraction (double result){
 
    // result = 1/2==0.5
    result = 0.5;
    return result * 10;
}

int main (int argc, char *argv[]){

    double result;
    printf("%.2lf\n", fraction(result));

    return EXIT_SUCCESS;
}
