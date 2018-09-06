#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void displayHelpMessage();
void program(int);

int main (int argc, char *argv[]) 
{
	//pid_t childpid = 0;
        //int i, n;
	int c, number;

	while ((c = getopt (argc, argv, "n:hp")) != -1)
	{
		switch(c)
		{
			case 'n':
				number = atoi(optarg);

				if(number < 0)
				{
					printf("%s: ", argv[0]);
                                	perror("Error: Positive numeric value must be entered with -n option.\n");
					printf("Terminating program....\n");
				}
				if(number > 15) 
				{
					printf("%s: ", argv[0]);
					perror("Error: Numeric value must be under 15 with -n option.\n");
					printf("Terminating program....\n");
				}
				else
				{
					printf("Variable option chosen with %d.\n", number);
					program(number);
				}
				break;
			case 'h':
				displayHelpMessage();
				break;
			case 'p':
				printf("%s: ", argv[0]);
				perror("Error: Detailed error message.");
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
				perror("Error: No options chosen. Please use -h for more info.\n");
				abort();
		}
	}

	/*if (argc != 2)
	{
      		fprintf(stderr, "Usage: %s processes\n", argv[0]);
      		return 1;
   	}
   	n = atoi(argv[1]);
   	for (i = 1; i < number; i++)
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
	printf("If no options are entered the program will not execute.\n\n");
}

void program(int number)
{
	pid_t childpid = 0;
        int i;

	for (i = 1; i < number; i++)
                if (childpid = fork())
                        break;
	sleep(10);
        fprintf(stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n\n",
           i, (long)getpid(), (long)getppid(), (long)childpid);
}
