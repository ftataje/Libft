/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:29:13 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/11 12:37:57 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static	size_t	qty_dig(long int n)
{
	long int	dig;

	dig = 1;
	while (n >= 10)
	{
		n /= 10;
		dig++;
	}
	return (dig);
}

char	*ft_itoa(int n)
{
	long int	auxnum;
	int			len;
	char		*res;
	int			i;

	auxnum = n;
	if (n < 0)
		auxnum = -n;
	len = qty_dig(auxnum);
	if (n < 0)
		len = qty_dig(auxnum) + 1;
	res = malloc(len + 1);
	if (!res)
		return (0);
	res[len] = '\0';
	i = len - 1;
	while (i >= 0)
	{
		res[i] = (auxnum % 10) + '0';
		auxnum /= 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

/* int	main(void)
{
	int	n;
	int	start;
	int	largo;

	start = 0;
	n = -140;
	largo = (n >= 0 ? qty_dig(n) - 1 : qty_dig(-n));
	while (start <= largo)
	{
		printf(":%c:", ft_itoa(n)[start]);
		start++;
	}
	return (0);
} */
