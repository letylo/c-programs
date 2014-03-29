#include <stdio.h>
#include <stdlib.h>

void end (const char *sentence){

    if (*sentence == '\0')
	return;

    end(sentence+1);
    printf("%c", *sentence);
}
int main (int argc, char *argv[]){

    const char *sentence = "The world is a vampire";
    end(sentence);
    printf("\n");
}
