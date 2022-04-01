/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:01:32 by ftataje-          #+#    #+#             */
/*   Updated: 2022/03/31 17:30:49 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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
//Si n <= len(DEST) ==> retorna el numero de caracteres del SRC + n
//Si n > len(DEST) la funcion original da ERROR, y la funcion creada da el len(DEST + SRC) y concatena los strs
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && j + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}

int	main(void)
{
	char	dest[] = "mikel";
	char	src[] = "ruiz";
	int	n;
	int	res;

	n = 6;
	printf("%s | %s\n", dest, src);
	res = ft_strlcat(dest, src, n);
	//res = strlcat(dest, src, n);
	printf("%d\n", res);
	printf("%s | %s\n", dest, src);
	printf("n = %d\n", n);
}
