/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:37:17 by ftataje-          #+#    #+#             */
/*   Updated: 2022/03/30 17:32:48 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

int	main(void)
{
	char	str1[] = "Bitcoinabcdef";
	char	str2[] = "Ethereum";

	//ft_memcpy(str1, str2, 3);
	memcpy(str1, str2, 3);
	printf("%s\n", str1);
	printf("%s\n", str2);
}
