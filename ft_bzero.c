/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:56:12 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/20 14:54:35 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/* int	main(void)
{
	char	str[] = "bitcoin";
	int		n;

	n = 3;
	printf("%s\n", str);
	ft_bzero(str +2, n);
	printf("%s\n", str);
	bzero(str + 2, n);
	printf("%s\n", str);
} */
