#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void print_usage(const char *command_name){

    fprintf(stderr, 
	    "Usage: %s [options] <base> <exponent>\n"
	    "\n"
	    "\n\t This program raise base to exponent."
	    "\n"
	    "\n\t<base>\t\t is a real number."
	    "\n"
	    "\n\t<exponent>\t is an integer."
	    "\n"
	    "\nOPTIONS"
	    "\n"
	    "\n\t -h\t\tShows help"
	    "\n",
	    command_name);
    exit(EXIT_FAILURE);
    // abort(); informa al SO de que la salida no ha sido 0
}

double power(double base, int exponent){
 
    double result = 1;
     
    for(int index = 0; index < exponent; index++)
          result *= base;
         
    return result;
}
    
int main (int argc, char *argv[]){

    double base;
    double exponent;
    int c;

    while ((c = getopt(argc, argv, "h:")) != -1);
       switch(c){
	   case 'h':
	       print_usage(argv[0]);
	       break;
       }
        

    if (argc < 3)	
        print_usage(argv[0]);

    base = atof(argv[1]);
    exponent = atoi(argv[2]);

    printf("%lf \n", power(base, exponent));
      
    return EXIT_SUCCESS;
}

