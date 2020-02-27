/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollero- <aollero@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 00:25:49 by aollero-          #+#    #+#             */
/*   Updated: 2020/02/25 19:58:06 by aollero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *d;

	d = dest;
	while (*d != '\0')
		d++;
	while (*src != '\0' && nb > 0)
	{
		*d = *(unsigned char*)src;
		nb--;
		src++;
		d++;
	}
	*d = '\0';
	return (dest);
}
