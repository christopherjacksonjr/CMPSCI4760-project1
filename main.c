#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

void displayHelpMessage();
void program(int, int, int);

int main (int argc, char *argv[]) 
{
	pid_t childpid = 0;
	int i, n, nchars, c, j, k;
	char in;

   	if (argc != 3) {   /* check for valid number of command-line arguments */
      		displayHelpMessage();
   	}

   	n = atoi(argv[1]);
	nchars = atoi(argv[2]);
	char mybuf[nchars];   	


	for (i = 1; i < n; i++)
		if (childpid = fork())
         		break;

	for(j = 0; j < nchars; j++)
	{
		scanf(" %c", &in);
		getchar();
		mybuf[j] = in;
	}

	for(k = 0; k < nchars; k++)
	{
		printf("%c", mybuf[k]);
	}
	/*fprintf(stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n",
           i, (long)getpid(), (long)getppid(), (long)childpid);*/
}

void displayHelpMessage()
{
	printf("\nTo run this program you must run the executable file with one the following arguments:\n\n");
	printf(" n        : Number of processes to fork off.\n");
      	printf(" nchars   : Number of time program will loop.\n");
        printf("\ni.e.  : ./ass1 3 5\n\n");
        printf("If no options are entered the program will not execute.\n\n");
}
