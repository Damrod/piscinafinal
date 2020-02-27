/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:25:42 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/25 20:47:24 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
