/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:56:12 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/04 11:57:22 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t len);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int	main(void)
{
	char	str[] = "bitcoin";
	int		n;

	n = 2;
	ft_bzero(str +2, n);
	printf("%s\n", str);
	bzero(str + 2, n);
	printf("%s\n", str);
}*/
