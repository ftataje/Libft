/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:44:12 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/20 12:39:40 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		return (c + 32);
	}
	else
		return (c);
}

/*int	main(void)
{
	int	a;

	a = 'E';
	a = ft_tolower(a);
	printf("%c\n", a);
	return (0);
}*/
