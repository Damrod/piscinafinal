#include <string.h>
#include <stdio.h>
#include "ft_str_is_alpha.c"

int main(void)
{
	char *str;
	char ST[]= "Holundo";
	//char ST[]= "aaaaa";

	str = ST;
	printf("%s\n", str);
	//ft_strncpy(dest, src, n);
	printf("%d\n", ft_str_is_alpha(str));
}
