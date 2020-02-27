#include <string.h>
#include <stdio.h>
#include "ft_str_is_numeric.c"

int main(void)
{
	char *str;
	char ST[]= "034123245fg267889";
	//char ST[]= "aaaaa";

	str = ST;
	printf("%s\n", str);
	//ft_strncpy(dest, src, n);
	printf("%d\n", ft_str_is_numeric(str));
}
