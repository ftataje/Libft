/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:01:36 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/01 15:55:15 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str2;

	str2 = s;
	while (n != 0)
	{
		*str2++ = 0;
		n--;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;

	rtn = malloc(size * count);
	if (!rtn)
		return (NULL);
	ft_bzero(rtn, count);
	return (rtn);
}

void	imprimirvector(int v[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		printf("%d", v[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	n;
	int	*p;
	int	*q;

	n = 10;
	p = malloc((n) * sizeof(int));
	imprimirvector(p, n);
	q = ft_calloc(n, sizeof(int));
	imprimirvector(q, n);
}
