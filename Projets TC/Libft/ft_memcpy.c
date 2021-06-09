/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <flee@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:43:48 by flee              #+#    #+#             */
/*   Updated: 2021/06/08 13:40:35 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*b;
	char	*a;
	int		index;

	b = (char *)dest;
	a = (char *)src;
	index = 0;
	while (index < n)
	{
		b[index] = a[index];
		index++;
	}
	return (b);
}