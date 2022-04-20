/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:16:55 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/20 10:09:59 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

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

/* int	main(void)
{
	char	a[] = "Bitcoin";
	char	b[] = "EthereumCardano";
	int		n;

	n = 20;
	printf(":%s: || :%s:\n", a, b);
	printf("%zu\n", ft_strlcpy(((void *)0), ((void *)0), 10));
	printf("n = %d\n", n);
	printf(":%s: || :%s:\n", a, b);
	return (0);
} */

/* Da el valor entero del tamaño del SRC, y el DEST toma
los valores del SRC en n - 1 (porque considera el NULL de antemano)
Da el largo del String2 y sobreescribe el String2 en el String1
en 'n' caracteres.*/
