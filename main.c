/*include statements*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

/*function prototype to display help message*/
void displayHelpMessage();

/*
 * childpid: pid_t variable to hold process IDs. 
 * i: iterative int variable to use in for loop.
 * n: variable int entered by user for number of processes to fork off.
 * nchars: int variable entered by the user for the number of characters they'd like to enter.
 * j: int interative variable to use in for loop.
 * in: char variable used to scan characters from std input one by one.
 * mybuf: char array used to store characters entered by user.
 * */

/*main function*/
int main (int argc, char *argv[]) 
{
	/*variable declarations*/
	pid_t childpid = 0;
	int i, n, nchars, j;
	char in;

	/*error checking - user has to enter two variables to run program*/
   	if (argc != 3) 
	{
      		displayHelpMessage();
   	}

	/*setting variables to command line arguments entered by user*/
   	n = atoi(argv[1]);
	nchars = atoi(argv[2]);
	char mybuf[(nchars + 1)];   	

	/*loop for process IDs*/
	for (i = 1; i < n; i++)
		if (childpid = fork())
         		break;

	/*loop to have user enter character one by one through std input*/
	for(j = 0; j < nchars; j++)
	{
		/*scans characters*/
		scanf(" %c", &in);
		getchar();
		mybuf[j] = in;
	}

	/*add null character to char array then prints array as string*/
	mybuf[(nchars + 1)] = '\0';
	fprintf(stderr, "process ID:%ld : %s\n", (long)getpid(),  mybuf);
}

/*function to display error message to user and assit to run program correctly*/
void displayHelpMessage()
{
	printf("\nTo run this program you must run the executable file with one the following arguments:\n\n");
	printf(" n        : Number of processes to fork off.\n");
      	printf(" nchars   : Number of time program will loop.\n");
        printf("\ni.e.  : ./ass1 3 5\n\n");
        printf("If no options are entered the program will not execute.\n\n");
}
