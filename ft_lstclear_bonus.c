/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:40:50 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/12 15:44:04 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!*lst)
		return ;
	while (*lst)
	{
		aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = aux;
	}
	*lst = 0;
}

/*Deletes and frees the given element and every successor of that element,
using the function ’del’ and free(3). Finally, the pointer to the list must
be set to NULL.*/

/*lst, un puntero a un puntero de la estructura t_list, que es la cabeza de la lista enlazada que se quiere eliminar, y del, un puntero a una función que se utiliza para eliminar el contenido de cada nodo de la lista.*/

/*
int	main(void)
{
	t_list *lst;

	// Crear la lista enlazada
	lst = ft_lstnew("Hola");
	ft_lstadd_front(&lst, ft_lstnew("Mundo"));
	ft_lstadd_front(&lst, ft_lstnew("¡"));
	while (lst)
	{
		printf("%s", lst->content);
		lst = lst->next;
	}
	// Eliminar la lista enlazada
	ft_lstclear(&lst, free);
	
	return (0);
}
*/