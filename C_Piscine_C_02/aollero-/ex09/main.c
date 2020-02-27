#include <string.h>
#include <stdio.h>
#include "ft_strcapitalize.c"

int main(void)
{
	char *str;
	char ST[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	//char ST[]= "aaaaa";

	str = ST;
	printf("%s\n", str);
	//ft_strncpy(dest, src, n);
	printf("%s\n", ft_strcapitalize(str));
}
