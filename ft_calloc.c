/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:01:36 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/20 14:54:43 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtn;

	rtn = malloc(size * count);
	if (!rtn)
		return (NULL);
	ft_memset(rtn, 0, count * size);
	return (rtn);
}

/* void	imprimirvector(int v[], int n)
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
} */
