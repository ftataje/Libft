/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:54:43 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/19 17:20:57 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*end;

	i = ft_strlen(s);
	end = s;
	s = (s + i);
	while (*s != *end && (char)c != *s)
		s--;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}

/* int	main(void)
{
	char	a[] = "HolaHolaXX";
	char	*b	= NULL;

	b = ft_strrchr(a, 'a');
	printf("%s || %s", a, b);
	return (0);
} */
