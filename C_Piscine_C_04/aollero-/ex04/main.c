#include "ft_putnbr_base.c"

int main (void)
{
	int prueba;
	char *base = "0123456789";

	prueba = -2147483648;
	ft_putnbr_base(prueba, base);
}