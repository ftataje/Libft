/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:16:55 by ftataje-          #+#    #+#             */
/*   Updated: 2022/03/31 15:58:10 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
//Da el valor entero del tamaño del SRC, y el DEST toma los valores del SRC en n - 1 (porque considera el NULL de antemano)
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize < src_len)
		dst[dstsize - 1] = '\0';
	else if (dstsize != 0)
		dst[i] = '\0';
	return (src_len);
}

int	main(void)
{
	char	dest[] = "AAAA";
	char	src[] = "BBBB";
	int		n;
	int		res;

	n = 3;
	printf("%s | %s\n", dest, src);
	res = ft_strlcpy(dest, src, n);
	//res = strlcpy(dest, src, n);
	printf("%d\n", res);
	printf("%s | %s", dest, src);
}
