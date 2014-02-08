#include <stdio.h>
#include <stdlib.h>

#define NUM 10

int main(int argc, char *argv[]){

    for(int repeat=0; repeat<NUM; repeat++)
    printf("%s\n", argv[1]);

    return EXIT_SUCCESS;
}
