/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 12:01:32 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/04 16:15:56 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (dst[len] && len < dstsize)
		len++;
	i = len;
	while (src[len - i] && len + 1 < dstsize)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < dstsize)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}

/*int	main(void)
{
	char	dst[] = "mikel";
	char	src[] = "ruiz";
	int		n;
	int		res;

	n = 8;
	printf("%s | %s\n", dst, src);
	res = ft_strlcat(dst, src, n);
	//res = strlcat(dst, src, n);
	printf("%d\n", res);
	printf("%s | %s\n", dst, src);
	printf("n = %d\n", n);
}

//Si n <= len(DEST) ==> retorna el numero de caracteres del SRC + n
Si n > len(DEST) la funcion original da ERROR, y la funcion creada
da el len(DEST + SRC) y concatena los strs*/
