#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *c)
{
	int i;

	i = 0;
	while(c[i] != '\0')
		i++;
	return(i);
}


int		main(int argc, char **argv)
{
	int i;
	int b;
	int j;
	int d = 0;
	int m;

	(void)argc;
	i = 0;
	b = ft_strlen(argv[1]);
	d = ft_strlen(argv[2]);

	char C[b + d];
	m = 0;

	while(i <= b)
	{
		if (argv[1][i] < 127 && argv[1][i] > 33)
		{
			j = 1;
			int o = 0;
			while(j <= (b + d))
			{
				if (argv[1][i] == C[j-1])
				{
					o++;
					break;
				}
				else
				j++;
			}
			if (o == 0)
			{
				C[m] = argv[1][i];
				ft_putchar(C[m]);
				m++;
			}
		}
		i++;
	}

printf ("\nb = %d argv=%s", b, argv[1]);
}
