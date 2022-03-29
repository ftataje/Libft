/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 21:16:55 by ftataje-          #+#    #+#             */
/*   Updated: 2022/03/02 16:42:23 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	i;

	counter = 0;
	i = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size -1))
		{
			dest [i] = src [i];
			i++;
		}
	}
	return (counter);
}
