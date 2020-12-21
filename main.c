#include "monty.h"
/**
 * main - main function of monty program
 * @argc: number of arguments
 * @argv: pointer to array of strings of arguments
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	size_t len;
	ssize_t read = 0;
	FILE *fp; /*para utilizar con fopen*/
	unsigned int line_number;
	char *opcode, *n;
	char *line = NULL; /* para hacer getline */
	stack_t *stack = NULL;

	if (argc < 2 || argc > 2)
	{
		printf("USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	line_number = 0; /* para capturar linea de error del documento*/
	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		opcode = strtok(line, DELIMI);
		if (opcode == NULL || strncmp(opcode, "#", 1) == 0)
			continue;
		if (strcmp(opcode, "push") == 0)
		{
			n = strtok(NULL, DELIMI);
			push(&stack, line_number, n);
		}
		else
			buil_func(opcode, &stack, line_number);
	}
	free(stack);
	free(line);
	free(fp);
	return (EXIT_SUCCESS); /* checkear si sale con un llamado */
}
