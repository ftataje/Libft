/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:24:01 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/20 12:38:31 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc(ft_strlen(src) + 1);
	if (!new)
		return (NULL);
	while (*src)
	{
		new[i++] = *src++;
	}
	new[i] = '\0';
	return (new);
}

/* int	main(void)
{
	char	*mine;
	char	*theirs;
	char	*example;

	example = "hello";
	mine = ft_strdup(example);
	theirs = strdup(example);
	printf(":%s:\n:%s:\n", mine, theirs);
	return (0);
} */

//en una nueva variable retorna el mismo string
