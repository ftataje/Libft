/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:33:44 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/04 11:57:47 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*newstr;
	int				i;

	i = 0;
	newstr = str;
	while (i < len)
	{
		newstr[i] = (unsigned char)c;
		i++;
	}
	return (newstr);
}

/*int	main(void)
{
	char	str[] = "penelope";

	ft_memset(str + 3, '$', 4);
	printf("%s\n", str);
	memset(str + 3, '$', 4);
	printf("%s\n", str);
}*/
