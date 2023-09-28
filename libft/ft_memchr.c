/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:45:12 by kojwatan          #+#    #+#             */
/*   Updated: 2023/09/28 18:37:47 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	unsigned int	i;

	i = (unsigned int)c;
	str = (char *)s;
	while (n > 0)
	{
		if ((unsigned int)*str % 128 == i % 128)
			return (str);
		n--;
		str++;
	}
	return (0);
}
