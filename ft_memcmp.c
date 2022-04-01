/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:44:17 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/01 12:52:08 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((char *)(s1 + i) != (char *)(s2 + i))
			return ((char *)(s1 + i) - (char *)(s2 + i));
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[] = "Bitcoin";
	char	str2[] = "Ethereum";
	int		res;

	res = ft_memcmp(str1, str2, 3);
	printf("%d", res);
}
