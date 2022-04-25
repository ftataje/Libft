/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:37:17 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/20 12:37:11 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;

	if (!dst && !src)
		return (NULL);
	a = (char *)src;
	b = (char *)dst;
	while (n--)
	{
		*b++ = *a++;
	}
	return (dst);
}

/*int	main(void)
{
	char	str1[] = "Bitcoin";

	printf("dest: %s\n", str1 + 2);
	printf("src: %s\n", str1);
	ft_memcpy(str1 + 2, str1, 3);
	//memcpy(str1, str2, 3);
	printf("dest final: %s\n", str1);
}

//El memcopy no funciona cuando el dest y el src
toman el mismo string pero el dest va despues del src
*/
