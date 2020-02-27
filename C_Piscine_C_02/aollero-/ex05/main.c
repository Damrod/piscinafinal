#include <string.h>
#include <stdio.h>
#include "ft_str_is_uppercase.c"

int main(void)
{
	char *str;
	char ST[]= "HOLAMUNDO";
	//char ST[]= "aaaaa";

	str = ST;
	printf("%s\n", str);
	//ft_strncpy(dest, src, n);
	printf("%d\n", ft_str_is_uppercase(str));
}
