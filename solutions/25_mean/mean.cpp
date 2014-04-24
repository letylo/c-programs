#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define N 3
#define MAX 0x200

struct TContenidos{
    double programacion;
    double sistemas;
};

struct TAlumno{
    char nombre_completo[MAX];
    struct TContenidos asignaturas;
 };

int main(int argc, char *argv[]){

    struct TAlumno clase[N];
    double media_p;
    double media_s;
    double media_alumno;

    for (int i=0; i<N; i++){
	printf("Nombre del alumno: ");
	__fpurge(stdin);
	gets(clase[i].nombre_completo);
	printf("Nota de programacion: ");
	__fpurge(stdin);
	scanf(" %lf", &clase[i].asignaturas.programacion);
	printf("Nota de sistemas: ");
	__fpurge(stdin);
	scanf(" %lf", &clase[i].asignaturas.sistemas);
    }

    for (int i=0; i<N; i++){
	printf("El nombre del alumno es: %s\n", clase[i].nombre_completo);
	printf("La nota de programacion es: %.2lf\n", clase[i].asignaturas.programacion);
	printf("La nota de sistemas es: %.2lf\n", clase[i].asignaturas.sistemas);
    }
    printf("\n");

    for(int i=0; i<N; i++)
	media_p += clase[i].asignaturas.programacion;
        media_p /= N;
        printf("La media de la clase en programacion es: %.2lf\n", media_p);
    
    for (int i=0; i<N; i++)
	media_s += clase[i].asignaturas.sistemas;
        media_s /= N;
	printf("La media de la clase en sistemas es: %.2lf\n", media_s);
    printf("\n");

    for (int i=0; i<N; i++)
	media_alumno = clase[0].asignaturas.programacion + clase[0].asignaturas.sistemas;
        media_alumno /= 2;
	printf("La media del alumno %s es: %.2lf\n", clase[0].nombre_completo, media_alumno);

    for (int i=0; i<N; i++)
	media_alumno = clase[1].asignaturas.programacion + clase[1].asignaturas.sistemas;
        media_alumno /= 2;
	printf("La media del alumno %s es: %.2lf\n", clase[1].nombre_completo, media_alumno);

    for (int i=0; i<N; i++)
	media_alumno = clase[2].asignaturas.programacion + clase[2].asignaturas.sistemas;
        media_alumno /= 2;
	printf("La media del alumno %s es: %.2lf\n", clase[2].nombre_completo, media_alumno);

     return EXIT_SUCCESS;
}
