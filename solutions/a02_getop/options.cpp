#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>   //libreria para getopt
#include <string.h>   //libreria para strcmp
#include <strings.h>  //libreria para strcpy y strcasecmp

#define ENG 0
#define ESP 1
#define MAX 0x100

//esta funcion saca por pantalla las opciones del programa
void print_usage(const char *command_name){
    fprintf(stderr,
	    "Usage: %s [options] <base> <exponent>ºn"
	    "\n"
	    "\nThis program raise base to exponent"
	    "\n"
	    "\n\t<base>\t\t is a real number"
	    "\n"
	    "\n\t<exponent\t is an integer"
	    "\n"
	    "\nOPTIONS"
	    "\n"
	    "\n\tShows help"
	    "\n",
	    command_name);
}

//esta funcion calcula la operacion
double power(double base, int exponent){

    double result = 1;
    bool help_flag = false;

    for (int index=0; index<exponent; index++)
	result *= base;

    return result;
}

int main (int argc, char *argv[]){

    double base;
    double exponent;
    int c;
    int language = ENG; //el predeterminado es ingles
    char user[MAX];
    const char *user_language = NULL;
    const char *sentence[] = {
	"The result is: ",
	"El resultado es: "
    };

    while ((c = getopt(argc, argv, "hl:")) != -1)
	switch(c){
          case 'h':
              print_usage(argv[0]);
	      break;
	  case 'l':
	      user_language = optarg;
	      //cambia de sitio lo que hay en user_language a user
	      strncpy(user, user_language, MAX);
	      //no afectan may o mins
	      if(strcasecmp(user_language, "spanish") == 0)
		  language = ESP;
	      break;
	  case '?':
	      print_usage(argv[0]);
	      break;
	}

    //el num de arguments - el num de opciones no pueden ser menor de 2
    if(argc - optind < 2){
	//si lo es se imprimen las opciones
	print_usage(argv[0]);
	exit(EXIT_FAILURE);
    }

    exponent = atoi(argv[optind]);
    base = atof(argv[optind+1]);

    printf("%s%lf\n", sentence[language], power(base, exponent));

    return EXIT_SUCCESS;
}
