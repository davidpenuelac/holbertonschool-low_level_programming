#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i = 1, c = 0, l;
if (argc == 0)
printf("0\n");
while (i < argc)
{
char *n = argv[i];
l = 0;
while (n[l] != '\0')
{
if ((n[l] < '0') || (n[l] > '9'))
{
printf("Error\n");
return (1);
}
l++;
}
c = c + atoi(argv[i]);
i++;
}
printf("%d\n", c);
return (0);
}
