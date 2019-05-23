/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguboju <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 13:53:49 by auguboju          #+#    #+#             */
/*   Updated: 2019/01/12 16:49:37 by auguboju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t size_s1;

	size_s1 = ft_strlen(s1);
	i = 0;
	while (s2[i] && i < n)
	{
		s1[size_s1 + i] = s2[i];
		i++;
	}
	s1[size_s1 + i] = '\0';
	return (s1);
}
