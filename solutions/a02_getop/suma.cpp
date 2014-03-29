#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>

int suma( int op1, int op2){

    int resultado;
    resultado = op1 + op2;
    return resultado;

}
int main(int argc, char *argv[]){

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    int aflag = 0;
    int bflag = 0;
    char *cvalue = NULL;
    int index;
    int c;
    const char *language = NULL;

    opterr = 0;

    while((c = getopt (argc, argv, "abcl:")) != -1) 
	switch(c)
	{
	    case 'a':
		aflag = 1;
		break;
	    case 'b':
		bflag = 1; 
		break;
	    case 'c':
		cvalue = optarg;
		break;
	    case 'l':
		language = optarg;
		if(!strcmp(language, "spanish" ))
		    printf("El resultado de la suma es: %i \n", suma(num1, num2));
		if(!strcmp(language, "english"))
		    printf("The result of operation is: %i \n", suma(num1, num2));
		break;
	    case '?':
		if(optopt == 'c')
		    fprintf(stderr, "Option -%c requires an argument.\n", optopt);
		else if(isprint (optopt))
		    fprintf(stderr, "Unknow option `-%c'.\n", optopt);
		else
		    fprintf (stderr,
			    "Unknow option charcter `\\x%x'.\n",
			    optopt);
		return 1;
	    default:
		abort();
	}

    printf("aflag = %d, bflag = %d, cvalue = %s\n",
	    aflag, bflag, cvalue);

    for(index = optind; index<argc; index++)
	printf("Non-option argument %s\n", argv[index]);	
    return 0;

    }
