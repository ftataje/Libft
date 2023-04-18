/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:40:41 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/12 16:22:44 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*Takes as a parameter an element and frees the memory
of the element’s content using the function ’del’ given
as a parameter and free the element. The memory of ’next’ must not be freed.*/

/*
int main(void)
{
	t_list *p = ft_lstnew("1 ");
	t_list *p1 = ft_lstnew("2 ");
	t_list *p2 = ft_lstnew("3 ");

	p->next = p1;
	p1->next = p2;
	p2->next = NULL;
	//Eliminamos el nodo p1 de la lista, asi imprimira solo el "1" y el "3"
	ft_lstdelone(p1, free);

	t_list *current = p;
	while (current != NULL)
	{
		printf("%s", (char *) current->content);
		current = current->next;
	}

	// Delete the entire linked list using ft_lstclear
	//ft_lstclear(&p, free);

	return (0);
}
*/