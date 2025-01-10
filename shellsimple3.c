#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

extern char **environ;

int main(void)
{
	char *buffer = NULL;
	size_t bufsize = 0;
	ssize_t nread;
	char *path;
	char *args[3];

	while (1)
	{
		printf("$ ");
		nread = getline(&buffer, &bufsize, stdin);
		if (nread == -1)
			break;

		buffer[strcspn(buffer, "\n")] = '\0';

		if (strcmp(buffer, "exit") == 0)
			break;

		path = "/usr/bin/ls";

		if (access(path, X_OK) != 0)
		{
			printf("Commande introuvable : %s\n", buffer);
			continue;
		}

		args[0] = path;
		args[1] = buffer;
		args[2] = NULL;

		pid_t pid = fork();
		if (pid == -1)
			continue;
		else if (pid == 0)
		{
			execve(path, args, environ);
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(NULL);
		}
	}

	free(buffer);
	return (0);
}

