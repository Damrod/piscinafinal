#include <string.h>
#include <stdio.h>
//#include "ft_strncpy.c"

//char *ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char *src;
	char *dest;
	char SOU[]= "Hola, Mundo!!! 0 Pero que";
	char DES[]="Yo debería desaparecer de aqu1.¿?";
	unsigned int n;

	src = SOU;
	dest = DES;
	n = 15;
	printf("%s\n%s\n\n", dest, src);
	//ft_strncpy(dest, src, n);
	printf("%d\n%s\n", ft_strncpy(dest, src, n), src);
}
