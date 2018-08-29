#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) 
{
	int c;

	while ((c = getopt (argc, argv, "n:hp")) != -1)
	{
		switch(c)
		{
			case 'n':
				printf("Variable option chosen.\n");
				break;
			case 'h':
				printf("Help option chosen.\n");
				break;
			case 'p':
				printf("perror option chosen.\n");
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
