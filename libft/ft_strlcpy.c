/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:22:10 by kojwatan          #+#    #+#             */
/*   Updated: 2023/09/21 14:35:28 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	length;
	int		i;

	length = 0;
	i = 0;
	while (src[length])
		length++;
	if(dstsize == 0)
		return length;
	while (1 < (dstsize  - i) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}

// #include<string.h>
// int	main(void)
// {
// 	unsigned int	copied_len;

// 	char src[20] = "saasas";
// 	char dest[10]; // バッファサイズは十分に大きくする必要があります
// 	copied_len = ft_strlcpy(dest, src, sizeof(src));
// 	printf("Copied string: %s\n", dest);
// 	printf("Length of copied string: %u\n", copied_len);
// 	return (0);
// }
