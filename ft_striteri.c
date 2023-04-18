/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:30:06 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/20 12:38:37 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/* void	ptr2func(unsigned int n, char *c)
{
	n++;
	*c += 1;
	n--;
}

int	main(void)
{
	char	arr[9] = "hello";

	ft_striteri(arr, ptr2func);
	printf("%s", arr);
}
 */
