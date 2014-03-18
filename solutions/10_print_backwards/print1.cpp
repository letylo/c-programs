#include <stdio.h>
#include <stdlib.h>

int main(){

    const char *sentence  = "The world is a vampire.";
    const char *end       = sentence;
    const char *beginning = sentence;

    while(*end != '\0')
	*end++;

    while(*end != *beginning){
	*end--;
	printf("%c", *end);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
