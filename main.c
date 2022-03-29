/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:21:43 by ftataje-          #+#    #+#             */
/*   Updated: 2022/03/29 13:28:50 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	int	res;

	res = ft_isascii(5);
	printf("%d", res);
	return (0);
}
