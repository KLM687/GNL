/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:48:18 by flee              #+#    #+#             */
/*   Updated: 2021/05/25 14:48:20 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_bzero(void *str, size_t n)
{
	unsigned int	index;
	unsigned char	*memory;

	index = 0;
	memory = str;
	while (index < n)
	{
		memory[index] = '\0';
		index++;
	}
}
