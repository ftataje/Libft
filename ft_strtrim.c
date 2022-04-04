/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftataje- <ftataje-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:27:04 by ftataje-          #+#    #+#             */
/*   Updated: 2022/04/04 12:11:37 by ftataje-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	printf("s1:%s\n", s1);
	i = ft_strlen(s1);
	printf("i:%zu\n", i);
	while (i && ft_strchr(set, s1[i]))
		i--;
	printf("i:%zu\n", i);
	return (ft_substr(s1, 0, i + 1));
}

int	main(void)
{
	char	a[] = "Bitcoin";
	char	b[] = "in";
	char	*res;

	res = ft_strtrim(a, b);
	printf("%s", res);
	return (0);
}
