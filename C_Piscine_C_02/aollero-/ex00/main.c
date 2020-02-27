#include <string.h>
#include <stdio.h>
#include "ft_strcpy.c"

int main(void)
{
	char *src;
	char *dest;
	char SOU[]= "Hola, Mundo!!! 0 Pero que muy muy";
	char DES[]="Yo debería desaparecer de aqu1.¿?";

	src = SOU;
	dest = DES;
	printf("%s\n%s\n\n", dest, src);
	strcpy(dest, src);
	printf("%s\n%s\n", ft_strcpy(dest, src), src);
}
