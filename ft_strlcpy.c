/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:16:55 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/04 11:48:20 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*int	main(void)
{
	char	a[] = "Bitcoin";
	char	b[] = "Ethereum";
	int		n;
	n = 10;
	printf(":%s: || :%s:\n", a, b);
	printf("%d\n", ft_strlcpy(a, b, n));
	printf(":%s: || :%s:\n", a, b);
	return (0);
}*/

/* Da el valor entero del tamaño del SRC, y el DEST toma
los valores del SRC en n - 1 (porque considera el NULL de antemano)
Da el largo del String2 y sobreescribe el String2 en el String1
en 'n' caracteres.*/
