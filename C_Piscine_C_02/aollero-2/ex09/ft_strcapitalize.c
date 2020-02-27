/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:19:03 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/22 22:23:45 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

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

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*strcp;
	char	mstr[ft_strlen(str)];

	strcp = mstr;
	ft_strcpy(str, ft_strlowcase(str));
	ft_strcpy(strcp, str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 0;
	while (strcp[i] != '\0')
	{
		if ((strcp[i - 1] < 'a' || strcp[i - 1] > 'z') &&
		!((strcp[i - 1] >= '0') && (strcp[i - 1] <= '9')) &&
		(strcp[i] >= 'a' && strcp[i] <= 'z'))
		{
			str[i] = strcp[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
