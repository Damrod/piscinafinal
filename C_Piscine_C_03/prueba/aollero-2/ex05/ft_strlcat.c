/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:26:00 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/25 20:48:33 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char				*dst;
	char				*sou;
	unsigned int		length;
	unsigned int		length2;

	sou = src;
	dst = dest;
	while (*dst != '\0')
		dst++;
	length = (unsigned char)(dst - dest);
	while (*sou != '\0')
		sou++;
	length2 = (unsigned char)(sou - src);
	while (src != '\0' && size - length - 1 > 0)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = '\0';
	return ((unsigned int)(length + length2));
}
