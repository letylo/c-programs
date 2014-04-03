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

void show(){ //Creamos la funcion show, que muestra el contenido de la pila

}

int push(char caracter){ //Creamos la funcion push, guarda lo introducido en la pila

    scanf("%c", &caracter); 
    push(caracter);

}

int pop(){ //Creamos la funcion pop, que nos devuelve el valor de top
}

void menu(int option_menu, char caracter){

    const char *menu[] = {
	"Introducir una palabra.",
	"Mostrar el estado de la pila.",
        "Mostrar el ultimo caracter añadido a la pila."      
    };
    system("clear");
    printf("\t\t\nMENU DE LA PILA\n");

    for (int op_number=0; op_number <sizeof(menu) / sizeof (char *); op_number++)
	printf("\t\t%i.- %s\n", op_number + 1, menu[op_number]);

    scanf(" %i", &option_menu);
    option_menu--;

    switch(option_menu){
	case 0:
	   	    break;
	case 1:
	    show();
	    break;
	case 2:
	    pop();
	    break;
    }

}
int main(int argc, char *argv[]){
   
    struct TStack pila;
    char caracter;
    int option_menu;

    menu(option_menu, caracter);
  
    return EXIT_SUCCESS;
}


