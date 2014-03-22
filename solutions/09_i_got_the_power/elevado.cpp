#include<stdio.h>
#include<stdlib.h>

#define N 0x10

double funcion(double x){

    return 2 * x * x;
}

int main(int argc, char *argv[]){

    double y[N];
    for(int x=0; x<N; x++)
	y[x] = funcion(x);

    for(int x=0; x<N; x++)
      printf("%lf", y[x]);
    printf("\n");
}
