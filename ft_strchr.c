/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:27:17 by ftataje-          #+#    #+#             */
/*   Updated: 2022/03/31 16:40:13 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s != 0)
		s++;
	printf("s = %s\n", s);
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}

int	main(void)
{
	char	a[] = "HolaHolaXX";
	char	*b	= NULL;

	b = ft_strchr(a, 'a');
	printf("%s || %s", a, b);
	return (0);
}
