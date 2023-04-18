/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:39:55 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/12 15:22:48 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//es un puntero a un puntero de la cabeza de la lista, lo que significa que la función tendrá acceso y modificará la dirección del puntero de la cabeza de la lista. Es para apuntar a un puntero de una lista, *(*lst)
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst; //el next del nuevo nodo sera la lista existente
	*lst = new; //el puntero ahora apuntara al nuevo nodo desde el inicio
}

/* int	main(void)
{
	t_list	*p;
	t_list	*p1;
	t_list	*p2;
	t_list	*nbc;

	//Agregaremos "Bitcoin" al inicio de una lista
	nbc = ft_lstnew("Bitcoin ");
	p = ft_lstnew("es ");
	p1 = ft_lstnew("libertad ");
	p2 = ft_lstnew("!");
	p->next = p1;
	p1->next = p2;
	p2->next = NULL;
	ft_lstadd_front(&p, nbc);
	while (p)
	{
		printf("%s", p->content);
		p = p->next;
	}
} */

/*Adds the element ’new’ at the beginning of the list.*/
