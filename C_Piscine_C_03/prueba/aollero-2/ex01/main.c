#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

/* int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
} */

int	main(void)
{
	char *str1;
	char *str2;

	str1 = "00620";
	str2 = "00800";
	//str1[0] = '\200';
	//str2[0] = '\0';
	//str1[1] = '\0';
	//str2[1] = '\0';
	printf("c  : %d\n", strncmp(str1, str2, 3));
	printf("ft : %d\n", ft_strncmp(str1, str2, 3));
}
