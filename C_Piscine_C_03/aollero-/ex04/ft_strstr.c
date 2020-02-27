/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:25:57 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/25 19:58:02 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*aguja;

	if (*to_find == '\0')
		return (to_find);
	aguja = to_find;
	while (*str != '\0')
	{
		if (*aguja == '\0')
			return ((char *)(str - aguja + to_find));
		else if (*aguja == *str)
			aguja++;
		else
			aguja = to_find;
		str++;
	}
	return (NULL);
}
