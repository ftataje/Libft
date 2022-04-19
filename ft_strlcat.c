/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:01:32 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/19 15:43:16 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	t;

	t = 0;
	a = ft_strlen(dst);
	b = ft_strlen(src);
	if (dstsize < a + 1)
	{
		return (b + dstsize);
	}
	while (a + t + 1 < dstsize && src[t] != '\0')
	{
		dst[a + t] = src[t];
		t++;
	}
	dst[a + t] = '\0';
	return (a + b);
}

/* int	main(void)
{
	char	dst[] = "AAA";
	char	src[] = "BBBBBB";
	int		n;
	int		res;

	n = 5;
	printf("%s | %s\n", dst, src);
	res = ft_strlcat(dst, src, n);
	//res = strlcat(dst, src, n);
	printf("%d\n", res);
	printf("%s | %s\n", dst, src);
	printf("n = %d\n", n);
} */

/*Si n <= len(DEST) ==> retorna el numero de caracteres del SRC + n
Si n > len(DEST) la funcion original da ERROR, y la funcion creada
da el len(DEST + SRC) y concatena los strs*/
