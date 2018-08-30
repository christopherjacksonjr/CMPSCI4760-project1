#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void displayHelpMessage();

int main (int argc, char *argv[]) 
{
	int c, fork;

	while ((c = getopt (argc, argv, "n:hp")) != -1)
	{
		switch(c)
		{
			case 'n':
				fork = atoi(optarg);
				printf("Variable option chosen with %d.\n", fork);
				break;
			case 'h':
				displayHelpMessage();
				break;
			case 'p':
				printf("%s: ", argv[0]);
				perror("Error: Detailed error message");
				break;
			case '?':
				if (optopt == 'c')
          			fprintf (stderr, "Option -%c requires an argument.\n", optopt);
        			else if (isprint (optopt))
          			fprintf (stderr, "Unknown option `-%c'.\n", optopt);
        			else
          			fprintf (stderr, "Unknown option character `\\x%x'.\n", optopt);
        			return 1;
			default:
				abort();
		}
	}

	/*pid_t childpid = 0;
   	int i, n;
   	
	if (argc != 2)
	{
      		fprintf(stderr, "Usage: %s processes\n", argv[0]);
      		return 1;
   	}
   	n = atoi(argv[1]);
   	for (i = 1; i < n; i++)
      		if (childpid = fork())
        		break;
   	fprintf(stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n",
           i, (long)getpid(), (long)getppid(), (long)childpid);
	return 0;*/ 
}

void displayHelpMessage()
{
	printf("\nTo run this program you must run the executable file with one the following options:\n\n");
	printf(" -h   : shows steps on how to use the program.\n");
	printf(" -n x : changes the value of x.\n");
	printf(" -p   : prints of an example of perror message.\n");
	printf("\ni.e.  : ./ass1 -n 5\n\n");
	printf("If no options are entered the program will run with default values.\n\n");
}
