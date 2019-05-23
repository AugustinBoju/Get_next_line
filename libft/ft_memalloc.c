/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: auguboju <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 13:41:36 by auguboju          #+#    #+#             */
/*   Updated: 2019/01/09 13:41:39 by auguboju         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = (void *)malloc(size * sizeof(size_t));
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
