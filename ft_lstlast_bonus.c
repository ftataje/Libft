/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:40:09 by ftataje-          #+#    #+#             */
/*   Updated: 2022/05/09 18:46:26 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	t_list	*lst;
	t_list	*p2;
	t_list	*p3;
	t_list	*p4;

	lst = ft_lstnew("Felix");
	p2 = ft_lstnew("Alexander");
	p3 = ft_lstnew("Tataje");
	p4 = ft_lstnew("Requena");
	lst->next = p2;
	p2->next = p3;
	p3->next = p4;
	p4->next = NULL;
	printf("ft_lstlast = %s\n", ft_lstlast(lst)->content);
	while (lst)
	{
		printf("%s\n", lst->content);
			lst = lst->next;
	}
	return (0);
} */

/*Returns the last element of the list.*/
