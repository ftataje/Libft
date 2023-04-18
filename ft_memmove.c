/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:50:33 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/20 12:38:08 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	if (a < b)
	{
		while (len--)
		{
			b[len] = a[len];
		}
	}
	else
		ft_memcpy(b, a, len);
	return (dst);
}

/*int	main(void)
{
	char	str1[] = "Bitcoin";

	printf("dest: %s\n", str1 + 2);
	printf("src: %s\n", str1);
	ft_memmove(str1 + 2, str1, 3);
	//memcpy(str1, str2, 3);
	printf("dest final: %s\n", str1);
}

//El memcopy no funciona cuando el dest y el src toman
el mismo string y el dest va despues del src
*/
