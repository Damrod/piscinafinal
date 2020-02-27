#include "ft_putstr_non_printable.c"

int		main(void)
{
	char	*string;

	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
}