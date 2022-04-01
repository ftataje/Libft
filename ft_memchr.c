/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:50:38 by ftataje-          #+#    #+#             */
/*   Updated: 2022/03/31 17:31:45 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str1[] = "Bitcoinnnnnnnn";
	char	*str2;

	str2 = ft_memchr(str1, 'o', 5);
	printf("%s || %s", str1, str2);
	return (0);
}
