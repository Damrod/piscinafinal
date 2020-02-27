#include <string.h>
#include <stdio.h>
#include "ft_str_is_printable.c"

int main(void)
{
	char *str;
	char ST[]= "helloF";
	//char ST[]= "aaaaa";

	str = ST;
	printf("%s\n", str);
	//ft_strncpy(dest, src, n);
	printf("%d\n", ft_str_is_printable(str));
}
