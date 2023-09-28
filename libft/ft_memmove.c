/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:45:22 by kojwatan          #+#    #+#             */
/*   Updated: 2023/09/28 20:25:52 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s;
	char		*d;
	size_t		i;

	s = (char *)src;
	d = (char *)dst;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s)
	{
		i = 1;
		while (i < len + 1)
		{
			d[len - i] = s[len - i];
			i++;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (d);
}
