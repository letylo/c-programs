#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

//Definir la estructura TStack
struct TStack{
    int stack[MAX];
    int next;
};

//Crear la funcion push con un entero y un puntero que se llama store y es de tipo TStack
void push (int value, struct TStack *store){

    store->stack[store->next++] = value;
}
//Crear la funcion pop con un puntero llamado store de tipo TStack
int pop (struct TStack *store){

    return store->stack[--store->next];
}

//Crear funcion muestra se crea una variable de tipo TStack y un puntero de tipo const char*
void muestra(struct TStack data, const char *title){

    printf("Stack: %s\n\n", title);

    for (int i=0; i<data.next; i++)
	printf("%i ", data.stack[i]);
    printf("\n");

}

int main (int argc, char *argv[]){

    struct TStack student;
    struct TStack league_results;

    student.next = 0;
    league_results.next = 0;

    push(3, &student);
    push(4, &league_results);
    push(7, &student);
    printf("He sacado de student un: %i \n", pop(&student));
    push(5, &student);

    muestra(student, "Student");
    muestra(league_results, "League Results");

    return EXIT_SUCCESS;
}























    


