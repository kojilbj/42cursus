/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:44:15 by kojwatan          #+#    #+#             */
/*   Updated: 2023/09/28 17:44:16 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (count > 0 && size > 0 && SIZE_MAX / count < size)
		return (NULL);
	dst = malloc(count * size);
	if (dst == NULL)
		return (NULL);
	while (i < count * size)
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
