/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:26:28 by ftataje-          #+#    #+#             */
/*   Updated: 2022/05/17 10:54:27 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len <= 0)
	{
		substr = (char *)malloc(1);
		substr[0] = '\0';
		return (substr);
	}
	if (len > ft_strlen(s) && start < ft_strlen(s))
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(*s) * len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

/*
int	main(void)
{
	char	a[] = "Bitcoin libertad";
	int		n;
	size_t	len;

	n = 5;
	len = 19;
	printf(":%s:", ft_substr(a, n, len));
	return (0);
}
*/

/*En una nueva variable se imprime en "len"
caracteres desde "start" en la string indicada*/
