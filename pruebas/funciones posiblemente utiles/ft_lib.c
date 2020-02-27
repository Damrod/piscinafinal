int		intpower(int a, int b)
{
	if (b == 0)
		return ('1');
	else if (b == 1)
		return (a);
	else
		return (a * intpower(a, b - 1));
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "-", 1);
}

int		ft_abint(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}

int ft_strlen(char *c)
{
	int i;

	i = 0;
	while(c[i] != '\0')
		i++;
	return(i);
}