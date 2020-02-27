#include <string.h>
#include <stdio.h>
#include "ft_strlowcase.c"

int main(void)
{
	char *str;
	char ST[]= "HELLO WORLD";
	//char ST[]= "aaaaa";

	str = ST;
	printf("%s\n", str);
	//ft_strncpy(dest, src, n);
	printf("%s\n", ft_strlowcase(str));
}
