#include <string.h>
#include <stdio.h>
#include "ft_strupcase.c"

int main(void)
{
	char *str;
	char ST[]= "  helloFreackinrgh 2 32\7gWorld";
	//char ST[]= "aaaaa";

	str = ST;
	printf("%s\n", str);
	//ft_strncpy(dest, src, n);
	printf("%s\n", ft_strupcase(str));
}
