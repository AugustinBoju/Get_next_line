/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguboju <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 13:43:25 by auguboju          #+#    #+#             */
/*   Updated: 2019/01/12 16:50:37 by auguboju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;

	i = 0;
	if (((unsigned char *)src) < ((unsigned char *)dst))
		while (len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	else
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i += 1;
		}
	return (((unsigned char *)dst));
}
