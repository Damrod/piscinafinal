#include "ft_strcmp.c"

#include <stdio.h>
#include <string.h>

/* int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
} */

int	main(void)
{
	char *str1;
	char *str2;

	str1 = "Hola mundo00";
	str2 = "Hola mundo0";
	printf("c  : %d\n", strcmp(str1, str2));
	printf("ft : %d\n", ft_strcmp(str1, str2));
}
