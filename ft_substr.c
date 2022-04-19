/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:26:28 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/19 18:04:08 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	str = (char *)malloc(len + 1);
	if (!s || !str)
		return (0);
	size = len;
	if (len > ft_strlen(s) && start < ft_strlen(s))
		size = ft_strlen(s) - start;
	if (start > ft_strlen(s))
	{
		str = (char *)malloc(1);
		if (!str)
			return (0);
		str[0] = '\0';
		return (str);
	}
	ft_strlcpy(str, s + start, size + 1);
	return (str);
}

/*int	main(void)
{
	char	a[] = "Bitcoin libertad";
	int		n;
	size_t	len;
	char	*res;

	n = 5;
	len = 19;
	printf(":%s:", ft_substr(a, n, len));
	return (0);
}*/

/*En una nueva variable se imprime en "len"
caracteres desde "start" en la string indicada*/
