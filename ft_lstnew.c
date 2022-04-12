/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:39:43 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/12 15:23:54 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* int	main(void)
{
	char	str[] = "Peru a Qatar2022";
	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("%s\n", elem->content);
} */

/*Allocates (with malloc(3)) and returns
a new element. The variable ’content’ is
initialized with the value of the parameter
’content’. The variable ’next’ is initialized to NULL.*/
