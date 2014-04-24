#include <stdio.h>
#include <stdlib.h>


//Hacer una pila del tipo TStack.
//Internamente tiene un array[MAX], tipo char.
//Tiene un entero que se llama top, que indica la primera posicion libre del array.
//1. Funcion Show. Muestra el contenido de la pila, desde la base hasta la cima, de bot a top-1. Que recibe un objeto de tipo TStack y lo muestra.
//2. Funcion Push. Recibe un caracter y un objeto de tipo TStack, mete el carcater dentro de la pila.top+1 , si la pila esta llena no se puede introducir nada.
//3. Funcion Pop. Cuyo objetivo es devolver el ultimo objeto apilado, top.

#define MAX 5 //Definimos el tamaño de la pila

struct TStack{ //Creamos el tipo TStack

    char hueco[MAX];
    int top;
};

enum Menu {poner, mostrar, quitar, salir};

void show(struct TStack pila ){ //Creamos la funcion show, que muestra el contenido de la pila


    for (int i=0; i<pila.top; i++)
	printf("%c ", pila.hueco[i]);
    printf("\n");

}

int push(struct TStack *pila, char caracter){ //Creamos la funcion push, guarda lo introducido en la pila

    (*pila).hueco[(*pila).top++] = caracter; 
    return caracter;
}

int pop(struct TStack *pila){ //Creamos la funcion pop, que nos devuelve el valor de top
   return (*pila).hueco[--(*pila).top];
}

int menu_pila(){

    int opcion;

    const char *menu[] = {
	"Añadir nuevo elemento a la pila.",
	"Mostrar el estado de la pila.",
	"Mostrar el ultimo caracter añadido a la pila.",  
        "Salir."    
     };


    printf("\t\t\nMENU DE LA PILA\n");

    for (int op_number=0; op_number <sizeof(menu) / sizeof (char *); op_number++)
	printf("\t\t%i.- %s\n", op_number + 1, menu[op_number]);

    printf("\n\tOpcion: ");

    scanf(" %i", &opcion);
    return --opcion;
 
}

int main(int argc, char *argv[]){

	struct TStack pila;
	char caracter;
	int option_menu;

	pila.top = 0;

        
	while(1) {
	    option_menu = menu_pila(); 
	    switch(option_menu){
		case poner:
		    printf("Introduce un caracter: ");
		    scanf(" %c", &caracter);
		    printf("Acabo de introducir un: %c\n", push(&pila, caracter));
		    break;
		case mostrar:
		    show(pila);
		    break;
		case quitar:
		    printf("Acabo de sacar un: %c\n", pop(&pila));
		    break;
		case salir:
		    return EXIT_SUCCESS;
 	    }
	    system("clear");    
	    getchar();
	    
 	}

	return EXIT_SUCCESS;
}  


