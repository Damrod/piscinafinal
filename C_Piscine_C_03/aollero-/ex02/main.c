#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

/* char	*ft_strcat(char *dest, char *src)
{
	char	*dst;

	dst = dest;
	while (*dst != '\0')
		dst++;
	while (*src != '\0')
	{
		*dst = *(unsigned char *)src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dest);
}
 */
int		main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;

	str_base = "Hello srb srbwr sbfdb sgfgv dfvfd gsf gdgf";
	src = " World   tomorrow retgqetg gwreokgjwñemrm , sbrgbokwjrbmvlwrm";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("dest : %s , src : %s\n", dest, src);
	printf("c  : %s$\n", strcat(dest, src));
	printf("ft : %s$\n", ft_strcat(dest2, src));
}
