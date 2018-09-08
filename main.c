#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void displayHelpMessage();
void program(int, int, int);

int main (int argc, char *argv[]) 
{
	//int c, number;
	int n, k, m;
	
	if(argc != 4)
	{
		displayHelpMessage();
	}
	else
	{
		n = atoi(argv[1]);
		k = atoi(argv[2]);
		m = atoi(argv[3]);

		program(n, k, m);
	}
}

void displayHelpMessage()
{
	printf("\nTo run this program you must run the executable file with one the following arguments:\n\n");
	printf(" n   : Number of processes to fork off.\n");
      	printf(" k   : Number of time program will loop.\n");
       	printf(" m   : How long the program will sleep before it finishes executing.\n");
        printf("\ni.e.  : ./ass1 3 5 2\n\n");
        printf("If no options are entered the program will not execute.\n\n");
}

void program(int n, int k, int m)
{
	pid_t childpid = 0;
        int i, j;

	for (i = 1; i < n; i++)
                if (childpid = fork())
                        break;
	for(j = 0; j < k; j++)
	{ 
		sleep(m);
        	fprintf(stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n\n",
           i, (long)getpid(), (long)getppid(), (long)childpid);
	}
}
