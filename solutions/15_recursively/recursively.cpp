#include <stdio.h>
#include <stdlib.h>

#define N 30

int producto(int n){

    return n * n-1;
}
int main(int argc, char *argv[]){

    printf("%i ", producto(N));
    printf("\n");
}
