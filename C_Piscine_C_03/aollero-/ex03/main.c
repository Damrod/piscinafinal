#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

/* char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dst;

	dst = dest;
	while (*dst != '\0')
		dst++;
	while (*src != '\0' && nb > 0)
	{
		*dst = *(unsigned char *)src;
		dst++;
		src++;
		nb--;
	}
	*dst = '\0';
	return (dest);
} */

int		main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		index;

	str_base = "Hello";
	src = " World";
	index = 0;
	while (index < 6)
	{
		dest[index] = str_base[index];
		dest2[index] = str_base[index];
		index++;
	}
	printf("c  : %s$\n", strncat(dest, src, 4));
	printf("ft : %s$\n", ft_strncat(dest2, src, 4));
}