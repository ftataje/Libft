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

	new = (t_list *)malloc(sizeof(t_list)); //por cada * se reserva 8 bytes(ver comentarios)
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

	elem = ft_lstnew((void *)str); //Se castea el str porque en la estructura el content es void
	printf("%s\n", elem->content);
} */

/*Allocates (with malloc(3)) and returns
a new element. The variable ’content’ is
initialized with the value of the parameter
’content’. The variable ’next’ is initialized to NULL.*/

/*Cada puntero en una arquitectura de 64 bits ocupa 8 bytes, por lo que el tamaño total de la estructura t_list es de 16 bytes.
Es cierto que un arreglo de caracteres de tamaño 101 bytes ocuparía 101 bytes en la memoria, mientras que un puntero a una cadena de caracteres de tamaño 101 bytes ocuparía solo 8 bytes (en una arquitectura de 64 bits).

Sin embargo, es importante tener en cuenta que un puntero a una cadena de caracteres no contiene la cadena en sí misma. En cambio, el puntero simplemente apunta a la ubicación en la memoria donde comienza la cadena.
Por lo tanto, si se tiene un puntero a una cadena de caracteres de tamaño 101 bytes, este puntero solo ocuparía 8 bytes, pero aún tendría que haber un bloque de memoria separado de 101 bytes reservado en algún lugar de la memoria para almacenar la cadena. El puntero simplemente apuntaría a la primera ubicación de ese bloque de memoria.

En resumen, aunque un puntero a una cadena de caracteres ocupa menos espacio en la memoria que un arreglo de caracteres, esto no significa que la cadena en sí misma ocupe menos espacio. El tamaño de la cadena en memoria sigue siendo el mismo, independientemente de cómo se defina la variable que la contiene.*/