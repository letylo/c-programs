#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

   const char *list[] = {"yield", "yelp", "yellow"};
   
   const char *aux;

    if(list[1] > list[0]){
	aux = list[0];
    	list[0] = list[1];
	list[1] = aux;
    }

    if(list[0] < list[2]){
   	 aux = list[0];
	 list[0] = list[2];
	 list[2] = aux;
    }

    if(list[1] < list[2]){
	 aux = list[1];
	 list[1] = list[2];
	 list[2] = aux;
    } 

    printf("%s %s %s\n", list[0], list[1], list[2]);
    
    return EXIT_SUCCESS;
}
