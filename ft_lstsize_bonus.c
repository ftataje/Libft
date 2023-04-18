/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:40:02 by ftataje-          #+#    #+#             */
/*   Updated: 2022/05/09 17:00:08 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/* int	main(void)
{
	t_list	*lst;
	t_list	*first;
	t_list	*second;
	t_list	*third;

	lst = ft_lstnew("today!");
	first = ft_lstnew("day");
	second = ft_lstnew("a wondeful");
	third = ft_lstnew("What");
	ft_lstadd_front(&lst, first);
	ft_lstadd_front(&lst, second);
	ft_lstadd_front(&lst, third);
	printf("ft_lstsize = %d\n", ft_lstsize(lst));
	while (lst)
	{
		printf("%s\n", lst->content);
			lst = lst->next;
	}
	return (0);
} */

/*Counts the number of elements in a list.*/
