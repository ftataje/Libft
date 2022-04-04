/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:50:33 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/04 11:58:09 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	char	*b;

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
	char	str1[] = "Bitcoinabcdef";
	char	str2[] = "Ethereum";

	//ft_memmove(str1, str2, 3);
	memmove(str1, str2, 3);
	printf("%s\n", str1);
	printf("%s\n", str2);
}*/
