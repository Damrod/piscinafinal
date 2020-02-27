#include <stdio.h>
#include <string.h>
#include "ft_atoi.c"

int main (void)
{
	char str[] = "   +98";
	char *prob;

	prob = str;
	printf("%d\n", ft_atoi(prob));
	printf("%s\n", str);
}