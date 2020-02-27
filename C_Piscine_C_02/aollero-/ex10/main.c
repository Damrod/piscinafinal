#include <string.h>
#include <stdio.h>
#include "ft_strlcpy.c"

int main(void)
{
	unsigned int size;
	char *src;
	char *dest;
	char SOU[]= "Hola, Mundo!!! 0 Pero que muy muy muy muuyb larg0000!qq";
	char DES[]="Yo debería desaparecer de aqu1.¿?";

	src = SOU;
	dest = DES;
	size = 15;
	printf("%s\n%s\n\n", dest, src);
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n%s\n\n", dest, src);
}
