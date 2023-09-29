#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


/**
 * infinite_while - Run an infinite while loop.
 * Return: Always 0.
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - Creates five zombie processes.
 * Return: Always 0.
 */


int main(void)
{
	pid_t pd;
	char c = 0;

	while (c < 5)
	{
		pd = fork();
		if (pd > 0)
		{
			printf("Zombie process created, PID: %d\n", pd);
			sleep(1);
			c++;
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}
