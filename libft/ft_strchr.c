/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:45:40 by kojwatan          #+#    #+#             */
/*   Updated: 2023/09/28 18:45:33 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned int	i;

	i = c;
	str = (char *)s;
	while (*str)
	{
		if (*str == i % 128)
			return (str);
		str++;
	}
	if (c == 0)
		return (str);
	return (0);
}
