#include "main.h"

/**
  * main - entry to our program
  * @argc: arg count
  * @argv: arg vector
  *
  * Return: 0 Always success
  */

int main(int argc, char **argv[])
{
	while(1)
	{	

		size_t nread;
		char *buf;
		size_t count =  10;

		write(STDOUT_FILENO, "MyShell$ ", 9 );

		nread = getline(&buf, &count ,stdin);

		if (nread == -1)
		{
			perror("Exiting Shell");
			exit(1);

		}

	printf("%s", buf);
	free(buf);

	}
	return 0;
}
