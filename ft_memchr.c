/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:50:38 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/19 17:40:19 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[] = "Bitcoinnnnnnnn";
	char	*str2;

	str2 = ft_memchr(str1, 2 + 256, 3);
	printf("%s || %s\n", str1, str2);
	printf("<%c>", 2 + 256);
	return (0);
} */
